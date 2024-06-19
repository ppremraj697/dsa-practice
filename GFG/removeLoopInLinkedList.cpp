#include <iostream>
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

void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    if (head->next == NULL)
        return;

    Node *slow = head;
    Node *fast = head->next;

    while (slow != fast && fast != NULL)
    {
        slow = slow->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
            if (fast->next != NULL)
                fast = fast->next;
            else
                break;
        }
        else
            break;
    }

    if (fast->next == NULL)
        return;

    int count = 1;
    while (slow->next != fast)
    {
        count++;
        slow = slow->next;
    }

    Node *temp1 = head;
    Node *temp2 = head;

    while (count)
    {
        temp2 = temp2->next;
        count--;
    }

    while (temp2 != temp1)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    while (temp2->next != temp1)
        temp2 = temp2->next;

    temp2->next = NULL;
}

int main()
{
    return 0;
}