#include <bits/stdc++.h>
using namespace std;

int mygcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    a = abs(a); b = abs(b);
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool ok = false;
        for (int i = 0; i < n && !ok; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (mygcd(a[i], a[j]) <= 2) {
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
