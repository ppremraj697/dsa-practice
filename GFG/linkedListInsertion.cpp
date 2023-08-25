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
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        // Your code here
        if (head == NULL)
        {
            Node *temp = new Node(x);
            head = temp;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = head;
            head = temp;
        }

        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        // Your code here
        if (head == NULL)
        {
            Node *temp = new Node(x);
            head = temp;
        }
        else
        {
            Node *temp = new Node(x);
            Node *pointer = head;

            while (pointer->next != NULL)
            {
                pointer = pointer->next;
            }

            pointer->next = temp;
        }

        return head;
    }
};

int main()
{

    return 0;
}