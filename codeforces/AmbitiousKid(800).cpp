#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {

        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
            A[i] = -A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
        break;
    }
    return 0;
}