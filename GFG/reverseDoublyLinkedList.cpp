#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *reverseDLL(Node *head)
{
    // Your code here
    if (head->next == NULL)
    {
        return head;
    }

    Node *back = NULL;
    Node *curr = head;
    // Node* forward = NULL;
    Node *forward = curr->next;

    while (curr != NULL)
    {
        // forward = curr -> next;
        curr->next = back;
        curr->prev = forward;
        back = curr;
        curr = forward;
        if (curr != NULL)
        {
            forward = curr->next;
        }
    }

    return back;
}

int main()
{
    return 0;
}