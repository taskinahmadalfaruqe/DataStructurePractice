#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> linkedList;
    int value;
    
    
    while (cin >> value && value != -1) {
        linkedList.push_back(value);
    }
    
    linkedList.sort();

    linkedList.unique();
    
    for ( int val : linkedList) {
        cout << val << " ";
    }
    
    return 0;
}
