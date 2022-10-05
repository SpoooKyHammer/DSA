
//  queue implementation 
// top()/ peek() - returns the top value i.e the value which was inserted recently
// get_front() - returns the front
// enqueue() - adds a value at the end
// dequeue() - changes the front to simulate the deletion of the front value
// is_empty() and is_full()

#include<iostream>
using namespace std;

class Queue{
    int queue_size;
    int front;
    int rear;
    int* list;

public:
    Queue(int n){
        queue_size = n;
        front = -1;
        rear = -1;
        list = new int[queue_size];
    }

    bool is_empty(){
        return front == -1 || front > rear;
    }

    bool is_full(){
        return rear == queue_size - 1;
    }

    void enqueue(int val){
        if(is_full()){
            cout << "Queue full" << endl;
            return;
        }

        if(front == -1){
            front++;
        }
        list[++rear] = val;
    }

    void dequeue(){
        if(is_empty()){
            cout << "Queue empty" << endl;
            return;
        }
        front++;
    }

    int get_front(){
        if(!is_empty()){
            return list[front];
        }

        return front;
    }

    void display(){
        if(is_empty()){
            cout << "Queue empty" << endl;
            return;
        }

        cout << "Queue: ";
        for(int i = front; i <= rear; i++){
            cout << list[i] << "\t";
        }
        cout << endl;
    }
};

int main(){
    Queue obj(3);
    obj.enqueue(12);
    obj.enqueue(24);
    obj.enqueue(36);
    obj.display();
    cout << "Front = " << obj.get_front() << endl;
    cout << "After dequeue:" << endl;
    obj.dequeue();
    obj.display();
    cout << "Front = " << obj.get_front() << endl;
    return 0;
}