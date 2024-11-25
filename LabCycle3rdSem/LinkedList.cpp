#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node(){
            this->value=0;
            this->next=NULL;
        }
        Node(int value){
            this->value=value;
            this->next=NULL;
        }
};

class LinkedList{

    private:
        Node *head;
    public:
        LinkedList(){
            head=NULL;
        }
        void insertFirst(int value){
            Node *newNode=new Node(value);
            if(head==NULL){
                head=newNode;
                return;
            }
            newNode->next=this->head;
            this->head=newNode;

        }
        void deleteFirst(){
            if(head==NULL){
                cout<<"\nNothing to delete";
            }
            head=head->next;
        }
        void display(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->value<<"->";
                temp=temp->next;
            }
        }
};

int main(){
    LinkedList list;
    list.insertFirst(3);
    list.insertFirst(4);
    list.insertFirst(7);
    list.deleteFirst();
    list.display();
    return 0;
}