
// double linked list
// insertBeg()
// forward traverse
// backward traverse

#include<iostream>
using namespace std;

class DoubleLinkedList{

    struct node{
        int data;
        node* next;
        node* prev;
    };

public:
    node* head = NULL;
    node* end = NULL;

    void insert_at_head(int val){
        node* new_node = new node();
        new_node->data = val;
        new_node->prev = NULL;

        if(head == NULL){
            new_node->next = NULL;
            end = new_node;
        }else{
            new_node->next = head;
            head->prev = new_node;
        }
        head = new_node;
    }

    void insert_at_end(int val){
        node* new_node = new node();
        new_node->data = val;
        new_node->next = NULL;

        if(end == NULL){
            new_node->prev = NULL;
            head = new_node;
        }else{
            new_node->prev = end;
            end->next = new_node;
        }
        end = new_node;
    }

    void forward_traverse(){
        if(head == NULL){
            cout << "Empty doubly linked list" << endl;
            return;
        }

        node* temp = head;
        cout << "Forward traverse:\t";
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void backward_traverse(){
        if(end == NULL){
            cout << "Empty doubly linked list" << endl;
            return;
        }

        node* temp = end;
        cout << "Backward traverse:\t";
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    DoubleLinkedList obj;
    obj.insert_at_head(10);
    obj.insert_at_head(20);
    obj.insert_at_end(30);
    obj.insert_at_end(50);
    obj.forward_traverse();
    obj.backward_traverse();
    return 0;
}