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
//         vector<int> Bin(n);
//         int count =0;
//         int newCount =0;
//         for(int i=0;i<n;i++)
//         {
//             cin >> Bin[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(Bin[i]==2) count++;
//         }
//         int  check = count/2;
//         int flag = 0;

//         if(count == 0) cout << 1 << endl;

//         else if(count % 2 == 0) 
//         {
//             for(int i=1;i<n-1;i++)
//             {
//                 if(Bin[i]==2) newCount++;
//                 if(newCount == check) flag = i+1;
//             }
//             cout << flag << endl;
//         }
        
//         else if(count % 2 !=0) cout << -1 << endl;

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        int total2 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == 2) total2++;
        }

        if(total2 % 2 == 1) {
            cout << -1 << '\n';
            continue;
        }
        if(total2 == 0) { // all ones -> smallest k is 1
            cout << 1 << '\n';
            continue;
        }

        int need = total2 / 2;
        int pref2 = 0;
        int ans = -1;
        // only consider k from 1..n-1 => i from 0..n-2 (0-based)
        for(int i = 0; i < n - 1; ++i) {
            if(a[i] == 2) pref2++;
            if(pref2 == need) { ans = i + 1; break; } // convert to 1-based k
        }

        cout << ans << '\n';
    }
    return 0;
}
