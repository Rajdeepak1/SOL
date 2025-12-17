
//  CHEATED

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        // Find minimum frequency
        int min_freq = INT_MAX;
        for (auto p : freq)
        {
            min_freq = min(min_freq, p.second);
        }
        
        // The answer is the MEX when we partition into min_freq multisets
        // We need to check what's the maximum value that appears at least min_freq times
        int mex = 0;
        for (int val = 0; val <= 100; val++)
        {
            if (freq[val] >= min_freq)
            {
                mex = val + 1;
            }
            else
            {
                break;
            }
        }
        
        cout << mex << "\n";
    }

    return 0;
}