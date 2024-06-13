#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<long long int> preFixSum(N);
    preFixSum[0] = A[0];

    for (int i = 1; i < N; ++i)
    {
        preFixSum[i] = preFixSum[i - 1] + A[i];
    }

    reverse(preFixSum.begin(), preFixSum.end());

    for (int i = 0; i < N; i++)
    {
        cout << preFixSum[i] << " ";
    }

    cout << endl;
    return 0;
}