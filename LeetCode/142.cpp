#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    ListNode *slow = head;
    ListNode *fast = head->next;

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
        return NULL;

    int count = 1;
    while (slow->next != fast)
    {
        count++;
        slow = slow->next;
    }

    ListNode *temp1 = head;
    ListNode *temp2 = head;

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

    return temp1;
}

int main()
{
    return 0;
}