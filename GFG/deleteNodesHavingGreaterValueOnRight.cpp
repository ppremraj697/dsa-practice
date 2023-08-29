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

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;

        while (curr != NULL)
        {
            Node *forward = curr->next;

            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    Node *compute(Node *head)
    {
        // your code goes here
        if (head->next == NULL)
        {
            return head;
        }

        head = reverse(head);

        Node *max = head;
        Node *curr = head->next;

        while (curr != NULL)
        {
            Node *forward = curr->next;

            if (max && max->data > curr->data)
            {
                max->next = forward;
                curr->next = NULL;
                curr = forward;
            }
            else
            {
                max = curr;
                curr = forward;
            }
        }

        head = reverse(head);

        return head;
    }
};

int main()
{
    return 0;
}