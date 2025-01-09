#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }
};

void insertAtStart(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->Next = head;
    head = temp;
}

// Traverse the linked list
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->Next;
    }
}

void insertAtEnd(Node*&tail,int d){
    Node*temp = new Node(d);
    tail->Next = temp;
    tail = tail->Next;
}

void insertAtPosition(Node*&head, int position, int d){
    
}

int main()
{
    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    insertAtStart(head, 14);
    // printList(head);
    insertAtEnd(tail,18);
    insertAtEnd(tail,20);
    printList(head);

    insertAtPosition(head, 3,24);
    printList(head);

    return 0;
}
