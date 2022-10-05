// find largest element in a linked list

#include<iostream>
using namespace std;

class LinkedList{

    struct node{
        int data;
        node* next;
    };

    node* head = NULL;

public:
    void insert_at_head(int val){
        node* new_node = new node();
        new_node->data = val;
        new_node->next = head;
        head = new_node;
    }


    void insert_at_end(int val){
        node* new_node = new node();
        new_node->data = val;
        new_node->next = NULL;

        // when node i.e list is empty
        if(head == NULL){
            head = new_node;
            return;
        }

        // when node i.e list is not empty
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }


    int get_largest_element(){
        node* temp = head;
        node* max = temp;

        while(temp != NULL){
            if(temp->data > max->data){
                max = temp;
            }
            temp = temp->next;
        }
        return max->data;
    }


    void display(){
        // // when node i.e list is empty
        if(head == NULL){
            cout << "Empty linked list";
            return;
        }

        // when node i.e list is not empty
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main(){
    LinkedList obj;
    obj.insert_at_head(5);
    obj.insert_at_head(10);
    obj.insert_at_end(15);
    obj.insert_at_head(14);
    obj.display();
    cout << "Largest element: " << obj.get_largest_element() << endl;
    return 0;
}