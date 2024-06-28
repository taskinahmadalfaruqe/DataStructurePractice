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

void difference(Node *head)
{
    if (head == NULL)
    {
        cout << "0" << endl;
        return;
    }

    int mn = INT_MAX;
    int mx = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < mn)
        {
            mn = tmp->val;
        }
        if (tmp->val > mx)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    int value = mx - mn;
    cout << value << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    difference(head);

    return 0;
}
