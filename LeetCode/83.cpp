#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *curr = head;

        while (curr->next != NULL)
        {
            ListNode *forward = curr->next;

            if (forward->val == curr->val)
            {
                if (forward->next != NULL)
                {
                    curr->next = forward->next;
                    // curr = forward -> next;
                    forward->next = NULL;
                }
                else
                {
                    curr->next = NULL;
                }
            }
            else
            {
                curr = forward;
            }
        }

        return head;
    }
};

int main()
{

    return 0;
}