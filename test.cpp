#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Function to delete a node from the beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    int n,i;
    LinkedList list;
    cout<<"enter the number of elements in linked list";
    cin>>n;
    for( i-0;i<n;i++)
    {

    list.insertAtBeginning(i);
    }
   

    cout << "Linked List after insertions: ";
    list.display();

    list.deleteFromBeginning();
    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}
