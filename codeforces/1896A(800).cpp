// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> P(n);
//         vector<int> p2(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> P[i];
//             cin >> p2[i];
//         }

//         sort(p2.begin(), p2.end());

//         int flag = 0;
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (P[i - 1] < P[i] && P[i] > P[i + 1])
//             {
//                 swap(P[i], P[i + 1]);
//                 flag = 1;
//             }
//         }

//         int check = 0;

//         if (flag == 0)
//             cout << "NO\n";

//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (P[i] != p2[i])
//                     check = 1;
//             }
//             if (check == 1)
//                 cout << "YES\n";
//             else
//                 cout << "NO\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> P(n);
        for (int i = 0; i < n; ++i) cin >> P[i];

        // target sorted array
        vector<int> target = P;
        sort(target.begin(), target.end());

        // repeat left->right pass until no change
        while (true) {
            bool changed = false;
            for (int i = 1; i + 1 < n; ++i) {
                if (P[i - 1] < P[i] && P[i] > P[i + 1]) {
                    swap(P[i], P[i + 1]);
                    changed = true;
                }
            }
            if (!changed) break;
        }

        cout << (P == target ? "YES\n" : "NO\n");
    }
    return 0;
}

