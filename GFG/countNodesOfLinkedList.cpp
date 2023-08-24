#include <bits/stdc++.h>
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

void insertAtHead(Node *&head, int d)
{
    if (head == NULL)
    {
        // cout<<"Linked List is EMPTY"<<endl;
        Node *temp = new Node(d);
        head = temp;
    }
    else
    {
        // cout<<"Linked List already has some nodes"<<endl;
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

int getCount(Node *head)
{
    // Code here
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void print(Node *head)
{
    Node *temp = head;
    cout << "Printing Linked List " << endl;
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
    // print(head);
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    print(head);
    cout << "Length of linked list is " << getCount(head) << endl;

    return 0;
}