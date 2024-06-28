#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int findIndex(Node *head, int x) {
    Node *current = head;
    int index = 0;
    while (current != NULL) {
        if (current->val == x) {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        Node *head = NULL;
        Node *tail = NULL;
        int val;

        while (true) {
            cin >> val;
            if (val == -1) break;
            Node *newNode = new Node(val);
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        int X;
        cin >> X;

        int index = findIndex(head, X);
        cout << index << endl;
    }

    return 0;
}
