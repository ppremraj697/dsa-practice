#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *curr = head;
    int count = 1;

    while (curr != NULL && count < position - 1)
    {
        curr = curr->next;
        count++;
    }

    if (curr->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "LinkedList is Empty. Can't delete!!!" << endl;
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node *curr = head;
    int count = 1;

    while (curr != NULL && count < position - 1)
    {
        curr = curr->next;
        count++;
    }

    Node *forward = curr->next;
    curr->next = forward->next;
    forward->next = NULL;
    delete forward;

    if (curr->next == NULL)
    {
        tail = curr;
    }
}

void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "LinkedList is empty. Can't Print!!!" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtPosition(head, tail, 1, 80);
    insertAtPosition(head, tail, 8, 90);
    insertAtPosition(head, tail, 4, 100);
    printList(head);
    cout << "Printing head->data " << head->data << endl;
    cout << "Printing tail->data " << tail->data << endl;

    deleteNode(head, tail, 1); // deleting first node
    printList(head);

    deleteNode(head, tail, 5); // deleting any middle node
    printList(head);

    deleteNode(head, tail, 7); // deleting last node
    printList(head);

    return 0;
}