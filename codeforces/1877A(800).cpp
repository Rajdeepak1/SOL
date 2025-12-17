// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int  t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> Eff(n);
//         for(int i=0;i<n;i++)
//         {
//             cin >> Eff[i];
//         }
//         int pos=0;
//         int neg=0;
//         for(int i=0;i<n;i++)
//         {
//             if(Eff[i]<0) neg = neg + Eff[i];
//             else pos = pos + Eff[i];
//         }
//         if(pos>neg) cout << pos << endl;
//         else cout << neg << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        long long sum = 0;
        for (int i = 0; i < n-1; ++i) {
            int a; cin >> a;
            sum += a;
        }
        cout << -sum << '\n';
    }
    return 0;
}

