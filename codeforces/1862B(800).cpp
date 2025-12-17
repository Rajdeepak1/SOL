// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> B(n);
//         for(int i=0;i<n;i++)
//         {
//             cin >> B[i];
//         }

//         vector<int> Or(n);
//         Or[0] = B[0];
//         for(int i=1;i<n;i++)
//         {   
//             if(B[i] >= Or[i-1]) {
//                 Or[i] = B[i];
//             } else {
//                 Or[i] = B[i] - 1;
//             }
//         }

//         cout << Or.size() << endl;
//         for(int i=0;i<Or.size();i++)
//         {
//             cout << Or[i] << " " ;
//         }
//     }
//     return 0;
// }  
// i wasn't able to solve so i took help from cgpt 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];

        vector<long long> a;
        a.push_back(b[0]);
        for (int i = 1; i < n; ++i) {
            if (b[i] < b[i-1]) {
                // need one extra before b[i] so that final b[i] gets included
                a.push_back(b[i]);
                a.push_back(b[i]);
            } else {
                // b[i] >= b[i-1] -> just append once
                a.push_back(b[i]);
            }
        }

        cout << a.size() << '\n';
        for (int i = 0; i < (int)a.size(); ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
