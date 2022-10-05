
//  stack implementation 
// top()/ peek() - returns the top value i.e the value which was inserted recently
// push() - adds a value at the end
// pop() - changes the top to simulate the deletion of the top value
// is_empty() and is_full()

#include<iostream>
using namespace std;

class Stack{
    int top;
    int stack_size;
    int* list;

public:
    Stack(int n){
        stack_size = n;
        top = -1;
        list = new int[stack_size];
    }

    bool is_empty(){
        return top == -1;
    }

    bool is_full(){
        return top == stack_size - 1;
    }

    int get_top(){
        if(!is_empty()){
            return list[top];
        }
        return top;
    }

    void push(int val){
        if(is_full()){
            cout << "Stack is full!" << endl;
            return;
        }
        list[++top] = val;
    }

    void pop(){
        if(is_empty()){
            cout << "Stack is empty, no element to pop." << endl;
            return;
        }
        top--;
    }

    void display(){
        if(is_empty()){
            cout << "Stack empty!" << endl;
            return;
        }
        cout << "Stack: ";
        for(int i = 0; i <= top; i++){
            cout << list[i] << "\t";
        }
        cout << endl;
    }
};

int main(){
    Stack obj(4);
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.display();
    obj.pop();
    cout << "After pop" << endl;
    obj.display();
    return 0;
}