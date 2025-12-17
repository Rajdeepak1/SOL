#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> B(n);
        for (int i = 0; i < n; ++i) cin >> B[i];

        int maxBlank = 0;
        int cur = 0;
        for (int i = 0; i < n; ++i) {
            if (B[i] == 0) {
                ++cur;
            } else {
                maxBlank = max(maxBlank, cur);
                cur = 0;
            }
        }
        
        maxBlank = max(maxBlank, cur);

        cout << maxBlank << '\n';
    }
    return 0;
}
