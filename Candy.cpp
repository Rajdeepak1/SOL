#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> prices(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> prices[i];
        }

        sort(prices.begin(), prices.end());

        int uniqueVals[2 * n], freq[2 * n];
        int idx = 0;

        int count = 1;

        for (int i = 1; i < 2 * n; i++)
        {
            if (prices[i] == prices[i - 1])
            {
                count++;
            }
            else
            {
                uniqueVals[idx] = prices[i - 1];
                freq[idx] = count;
                idx++;
                count = 1;
            }
        }

        uniqueVals[idx] = prices[2 * n - 1];
        freq[idx] = count;
        idx++;

        int result = 0;
        for (int i = 0; i < idx; i++)
        {
            if (freq[i] > 2)
            {
                result = 1;
                break; 
            }
        }

        if (result > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
