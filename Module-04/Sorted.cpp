#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin >> A;
    while (A--)
    {
        int B;
        cin >> B;
        vector<int> Ar(B);
        for (int i = 0; i < B; i++)
        {
            cin >> Ar[i];
        }
        bool shorted = true;

        for (int i = 0; i < B-1; i++)
        {
            if (Ar[i] > Ar[i + 1])
            {
                shorted = false;
                break;
            }
        }
        if (shorted)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}