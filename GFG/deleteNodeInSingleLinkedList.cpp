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

Node *deleteNode(Node *head, int x)
{
    // Your code here
    if (x == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    int count = 1;

    while (count < x)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev->next = curr->next;
    curr->next = NULL;

    return head;
}

int main()
{
    return 0;
}