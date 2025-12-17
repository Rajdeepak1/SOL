// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, k, x;
//         cin >> n >> k >> x;
        
        
//         if(n%2==0)
//         {   
//             if(x!=1) 
//             {   
//                 cout << "YES\n";

//                 for(int i=0;i<n;i++)
//                 {
//                     cout << 1 << " ";
//                 }
//                 cout << "\n";
//             }
//             else 
//             {
//                 int till = n/2;
//             cout << "YES\n";
//             if(x==1)
//             {
//                 for(int i=0;i<till;i++)
//                 {
//                     cout << 2 << " ";
//                 }
//                 cout << "\n";
//             }
//             }
            
//         }
//         else
//         {   
            
//             if(x==1)
//             {
//                 for(int i=0;i<till;i++)
//                 {
//                     cout << 2 << " ";
//                 }
//                 cout << "\n";
//             }int till = n/2;
//             cout << "YES\n";
            
//             else
//             {
//                 int tillA=0;
//             int div=0;
//             for(int i=1;i<=k;i++)
//             {
//                 if(n%i==0) div = i; tillA = n/div; break;
//             }

//             if(!div) cout << "NO \n";
//             else
//             {
//                 cout << "YES\n";
//                 for(int i=0;i<tillA;i++) cout << div << " ";
//             }

//             }
            
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
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        // Case 1: x != 1 -> 1 is allowed, so we can always use n copies of 1
        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; ++i) {
                if (i) cout << ' ';
                cout << 1;
            }
            cout << "\n";
            continue;
        }
        
        // From here x == 1
        // If k == 1 then there are no available integers at all
        if (k == 1) {
            cout << "NO\n";
            continue;
        }
        
        // k >= 2 and x == 1 -> smallest available number is 2
        if (n % 2 == 0) {
            // even -> use n/2 copies of 2
            cout << "YES\n";
            cout << (n / 2) << "\n";
            for (int i = 0; i < n / 2; ++i) {
                if (i) cout << ' ';
                cout << 2;
            }
            cout << "\n";
        } else {
            // n is odd
            if (k >= 3) {
                // use one 3 and rest 2's
                cout << "YES\n";
                cout << 1 + (n - 3) / 2 << "\n";
                cout << 3;
                for (int i = 0; i < (n - 3) / 2; ++i) {
                    cout << ' ' << 2;
                }
                cout << "\n";
            } else {
                // k == 2 but x == 1 -> only available number is 2 -> can't make odd n
                cout << "NO\n";
            }
        }
    }
    return 0;
}
