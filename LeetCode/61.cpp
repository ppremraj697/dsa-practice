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

ListNode *rotateRight(ListNode *head, int k)
{

    if (head == NULL || head->next == NULL || k == 0)
        return head;

    ListNode *temp = head;
    int listLength = 1;

    while (temp->next != NULL)
    {
        temp = temp->next;
        listLength++;
    }

    if (k > listLength)
    {
        k = k % listLength;
    }

    int i = listLength - k + 1;
    temp->next = head;
    while (i - 1)
    {
        temp = temp->next;
        i--;
    }

    ListNode *forward = temp->next;

    temp->next = NULL;
    head = forward;

    return head;
}

int main()
{
    return 0;
}