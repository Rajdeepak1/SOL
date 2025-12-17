#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        int countAns = 0;

        for(long long i = 1; i <= n; i++)
        {
            long long x = i;
            int nonZero = 0;

            while(x)
            {
                if(x % 10 != 0) nonZero++;
                x /= 10;
            }

            if(nonZero == 1) countAns++;
        }

        cout << countAns << endl;
    }
    return 0;
}
