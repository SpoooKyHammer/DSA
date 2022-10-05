#include<iostream>
using namespace std;

class CircularQueue{
    int queue_size;
    int front;
    int rear;
    int* list;

public:
    CircularQueue(int n){
        queue_size = n;
        front = -1;
        rear = -1;
        list = new int[queue_size];
    }

    bool is_empty(){
        return front == -1 && rear == -1;
    }

    bool is_full(){
        return (rear + 1) % queue_size == front;
    }

    void enqueue(int val){
        if(is_full()){
            cout << "Queue full" << endl;
            return;
        }

        if(front == -1){
            front++;
        }
        rear = (rear + 1) % queue_size;
        list[rear] = val;
    }

    void dequeue(){
        if(is_empty()){
            cout << "Queue empty, no element to remove." << endl;
            return;
        }

        if(front == rear){
            front = -1;
            rear = -1;
        }else{
            front = (front + 1) % queue_size;
        }
    }

    int get_front(){
        if(!is_empty()){
            return list[front];
        }
        return front;
    }

    void display(){
        if(is_empty()){
            cout << "Queue empty, no element to remove." << endl;
            return;
        }

        cout << "Queue: ";
        if(front <= rear){
            for(int i = front; i <= rear; i++){
                cout << list[i] << "\t";
            }
            cout << endl;
        }else{
            for(int i = front; i < queue_size; i++){
                cout << list[i] << "\t";
            }
            for(int i = 0; i <= rear; i++){
                cout << list[i] << "\t";
            }
            cout << endl;
        }
    }
};

int main(){
    CircularQueue obj(3);
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.display();
    cout << "Front: " << obj.get_front() << endl;
    cout << "After dequeue: " << endl;
    obj.dequeue();
    obj.display();
    cout << "After re-enqueue: " << endl;
    obj.enqueue(40);
    obj.display();
    return 0;
}