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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // For a good array, we can only have at most 2 distinct values
        // and they must alternate
        set<int> unique_vals(a.begin(), a.end());
        
        if (unique_vals.size() > 2) {
            cout << "NO\n";
        } else if (unique_vals.size() == 1) {
            cout << "YES\n";
        } else {
            // exactly 2 distinct values
            // Check if we can arrange them alternately
            vector<int> vals(unique_vals.begin(), unique_vals.end());
            int val1 = vals[0], val2 = vals[1];
            
            // Count occurrences
            int cnt1 = 0, cnt2 = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == val1) cnt1++;
                else cnt2++;
            }
            
            // For alternating array, counts must be equal or differ by 1
            if (abs(cnt1 - cnt2) <= 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}