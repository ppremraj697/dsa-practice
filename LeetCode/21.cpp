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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    if (list1 == NULL && list2 == NULL)
    {
        return list1;
    }
    else if (list1 == NULL)
    {
        return list2;
    }
    else if (list2 == NULL)
    {
        return list1;
    }

    ListNode *curr1 = list1;
    ListNode *curr2 = list2;

    if (curr1->val <= curr2->val)
    {
        while (curr1 != NULL && curr2 != NULL && curr1->next != NULL)
        {
            ListNode *forward1 = curr1->next;
            ListNode *forward2 = curr2->next;

            if (curr1->val <= curr2->val && curr2->val <= forward1->val)
            {
                curr1->next = curr2;
                curr2->next = forward1;
                curr2 = forward2;
                curr1 = curr1->next;
            }
            else if (curr1->val <= curr2->val &&
                     curr2->val > forward1->val)
            {
                curr1 = curr1->next;
            }
            else if (curr2->val < curr1->val)
            {
                curr2->next = curr1;
                curr2 = forward2;
            }
            else
            {
                curr1 = curr1->next;
            }
        }

        if (curr2 != NULL)
        {
            curr1->next = curr2;
        }

        return list1;
    }
    else
    {
        while (curr1 != NULL && curr2 != NULL && curr2->next != NULL)
        {
            ListNode *forward1 = curr1->next;
            ListNode *forward2 = curr2->next;

            if (curr2->val <= curr1->val && curr1->val <= forward2->val)
            {
                curr2->next = curr1;
                curr1->next = forward2;
                curr1 = forward1;
                curr2 = curr2->next;
            }
            else if (curr2->val <= curr1->val &&
                     curr1->val > forward2->val)
            {
                curr2 = curr2->next;
            }
            else if (curr1->val < curr2->val)
            {
                curr1->next = curr2;
                curr1 = forward1;
            }
            else
            {
                curr2 = curr2->next;
            }
        }

        if (curr1 != NULL)
        {
            curr2->next = curr1;
        }

        return list2;
    }
}

int main()
{
    return 0;
}