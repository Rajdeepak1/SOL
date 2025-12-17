#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum;
        cin >> n;
        vector<int> M(n);
        sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> M[i];
            sum += M[i];
        }
        int MAXA = sum/n;
        sort(M.begin(),M.end());
        if(MAXA < M[n-1]) MAXA = M[n-1];
        cout << MAXA << endl;

    }
    return 0;
}
// great it striked on 15/12/25 @5:46am