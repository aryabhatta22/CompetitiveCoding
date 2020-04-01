/**************************
 Description    :  Simple Linked list with basic operations
 Date           :  1 Mar 2020
 **************************/

#include<iostream>

using namespace std;
        
        //Node
class Node{

    public:
    int data;
    Node* next;
    
    Node(){
        next = NULL;
    }
    
    Node(Node* newNode) {
        data = newNode->data;
        next = newNode->next;
    }
};

        //Linked List
class LL{

    public:
    Node head;
    
    LL(){
        head.next = NULL;
    }
    
                //member functions
                
    void display() {
        
        int count =0;
        Node* temp = new Node(head);
        while(temp->next != NULL && count<=6) {
            cout<<temp->next->data<<"-";
            temp = temp->next;
            count++;
        }
    }
    
    int insertElement(int x){
        
        Node* temp = new Node(head);
        Node newNode = new Node();
        newNode.data = x;
        
        if(head.next == NULL){
            head.next= &newNode;
            cout<<"*"<<newNode.data<<" Adress: \t"<<newNode.next;
        }
        else{
            
            while(temp->next != NULL) {
                cout<<"traverse data "<<temp->data<<endl;
                temp = temp->next;
            }
            cout<<"+"<<newNode.data<<" \n";
            temp->next = &newNode;
        }
        return x;
    }
};


                        // Driver code
int main() {
    
    LL ll1;
    
    ll1.insertElement(1);
    ll1.insertElement(2);
    ll1.insertElement(3);
    ll1.insertElement(4);
    
    ll1.display();
    
    ll1.insertElement(5);
    ll1.insertElement(6);
    ll1.insertElement(7);
    
    ll1.display();
    
    return 0;
}