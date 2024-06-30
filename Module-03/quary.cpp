#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void deleteHead(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void deleteAtIndex(Node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int Q;
    cin >> Q;

    int X, V;
    while (Q--)
    {
        cin >> X >> V;
        if (X == 0)
        {
            insertHead(head, V);
        }
        else if (X == 1)
        {
            insertTail(head, V);
        }
        else if (X == 2)
        {
            if (V == 0)
            {
                deleteHead(head);
            }
            else
            {
                deleteAtIndex(head, V);
            }
        }
        printList(head);
    }

    return 0;
}
