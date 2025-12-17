#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        long long mn = a[0];
        vector<long long> b, c;

        for (int i = 0; i < n; i++) {
            if (a[i] == mn)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }

        if (c.empty()) {
            cout << -1 << "\n";
        } else {
            cout << b.size() << " " << c.size() << "\n";
            for (auto x : b) cout << x << " ";
            cout << "\n";
            for (auto x : c) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
// i though for long but used cgpt at last. nice
