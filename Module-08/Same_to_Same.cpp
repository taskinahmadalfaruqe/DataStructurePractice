#include <iostream>
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

int areListsEqual(Node *head1, Node *head2)
{
    int flag = 1;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            flag = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (head1 != NULL || head2 != NULL)
    {
        flag = 0;
    }

    return flag;
}

void freeLinkedList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Node *newNode = new Node(val);
        if (head1 == NULL)
        {
            head1 = newNode;
            tail1 = newNode;
        }
        else
        {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Node *newNode = new Node(val);
        if (head2 == NULL)
        {
            head2 = newNode;
            tail2 = newNode;
        }
        else
        {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    int result = areListsEqual(head1, head2);
    if (result == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
