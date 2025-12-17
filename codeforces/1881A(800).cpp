// I thought so much but wasn't able to code by myslef so i had to take it from chatgpt
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;

        // If any character of s is not in x, impossible
        bool possible = true;
        for (char c : s) {
            if (x.find(c) == string::npos) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << -1 << "\n";
            continue;
        }

        string cur = x;
        int answer = -1;

        // Try up to 6 operations (more than enough for n*m <= 25)
        for (int k = 0; k <= 6; k++) {
            if (cur.find(s) != string::npos) {
                answer = k;
                break;
            }
            cur += cur;  // one operation
        }

        cout << answer << "\n";
    }

    return 0;
}
