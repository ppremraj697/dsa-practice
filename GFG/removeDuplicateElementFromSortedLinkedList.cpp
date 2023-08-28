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

Node *removeDuplicates(Node *head)
{
    // your code goes here
    if (head->next == NULL)
    {
        return head;
    }

    Node *curr = head;

    while (curr != NULL)
    {
        Node *forward = curr->next;

        if (forward && curr->data == forward->data)
        {
            curr->next = forward->next;
            // curr = forward -> next;//missed case this case 2 -> 2 -> 2 -> 2 -> 2 due to this line
            forward->next = NULL;
            delete forward;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}

int main()
{
    return 0;
}