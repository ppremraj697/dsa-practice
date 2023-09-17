#include <iostream>
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *curr = head;
    int count = 1;

    while (curr != NULL && count < position - 1)
    {
        curr = curr->next;
        count++;
    }

    if (curr->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "LinkedList is Empty. Can't delete!!!" << endl;
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node *curr = head;
    int count = 1;

    while (curr != NULL && count < position - 1)
    {
        curr = curr->next;
        count++;
    }

    Node *forward = curr->next;
    curr->next = forward->next;
    forward->next = NULL;
    delete forward;

    if (curr->next == NULL)
    {
        tail = curr;
    }
}

Node *reverseList(Node *&head, Node *&tail) // iteratively reversing linked list
{
    if (head == NULL || head->next == NULL) // empty linked list or single node linked list
    {
        return head;
    }

    tail = head;
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

Node *reverseList1(Node *&head, Node *&tail) // recursively reversing linked list
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *chhotaHead = reverseList1(head->next, tail);

    head->next->next = head;
    head->next = NULL;

    tail = head;
    return chhotaHead;
}

void reverseList2(Node *&head, Node *&curr, Node *&prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    reverseList2(head, curr->next, curr);
    curr->next = prev;
}

int middleOfList(Node *head)
{
    int size = 1;
    Node *temp1 = head;

    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        size++;
    }

    int middle = (size / 2) + 1;

    int count = 0;
    Node *temp2 = head;
    while (middle <= count)
    {
        temp2 = temp2->next;
    }

    return temp2->data;
}

int middleOfList1(Node *head)
{
    // considering that list has atleast one node
    if (head->next == NULL)
    {
        return head->data;
    }
    else if (head->next->next == NULL)
    {
        return head->next->data;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow->data;
}

bool detectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast != slow)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    if (slow == fast)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node *startOfLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast != slow)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    slow = head;
    fast = fast->next;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "LinkedList is empty. Can't Print!!!" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtPosition(head, tail, 1, 80);
    insertAtPosition(head, tail, 8, 90);
    insertAtPosition(head, tail, 4, 100);
    insertAtPosition(head, tail, 2, 110);
    printList(head);
    cout << "Printing head->data " << head->data << endl;
    cout << "Printing tail->data " << tail->data << endl;

    /*DELETION
    deleteNode(head, tail, 1); // deleting first node
    printList(head);

    deleteNode(head, tail, 5); // deleting any middle node
    printList(head);

    deleteNode(head, tail, 7); // deleting last node
    printList(head);
    */

    /*REVERSAL
    Node *newHead = reverseList(head, tail);
    printList(newHead);
    cout << "Printing head->data " << newHead->data << endl;
    cout << "Printing tail->data " << tail->data << endl;

    Node *newHead1 = reverseList1(newHead, tail);
    printList(newHead1);
    cout << "Printing head->data " << newHead1->data << endl;
    cout << "Printing tail->data " << tail->data << endl;

    Node *curr = head;
    Node *prev = NULL;
    reverseList2(head, curr, prev);
    printList(head);
    */

    /*MIDDLE OF LIST
    int middle0 = middleOfList1(head);
    cout << "Middle of linked list is " << middle0 << endl;
    int middle1 = middleOfList1(head);
    cout << "Middle of linked list is " << middle1 << endl;
    */

    // tail->next = head->next->next->next->next->next;
    tail->next = head->next->next->next->next;
    // tail->next = head->next->next->next;
    // tail->next = head;

    bool ans = detectLoop(head);
    if (ans)
    {
        cout << "List contains LOOP " << endl;
    }
    else
    {
        cout << "List doesn't have LOOP " << endl;
    }

    Node *ans1 = startOfLoop(head);
    cout << "Starting point of loop is " << ans1->data << endl;

    return 0;
}