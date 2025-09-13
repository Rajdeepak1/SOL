// # ATM Machine Problem

// There is an ATM machine. Initially, it contains a total of `K` units of money.  
// `N` people (numbered `1` through `N`) want to withdraw money; for each valid `i`, the `i`-th person wants to withdraw `Ai` units of money.

// The people come in and try to withdraw money one by one, in the increasing order of their indices.  
// Whenever someone tries to withdraw money:
// - If the machine has **at least** the required amount, it will give out the money.
// - Otherwise, it will throw an error and not give out anything; in that case, this person will go home directly.

// For each person, determine whether they will get the required amount of money or not.

// ---

// ## Input
// - The first line of input contains a single integer `T` — the number of test cases.
// - The first line of each test case contains two space-separated integers `N` and `K`.
// - The second line contains `N` space-separated integers `A1, A2, …, AN`.

// ---

// ## Output
// For each test case, print a single line containing a string with length `N`.  
// - The `i`-th character of this string should be `'1'` if the `i`-th person will successfully withdraw their money or `'0'` otherwise.

// ---

// ## Constraints
// - 1 ≤ T ≤ 100  
// - 1 ≤ N ≤ 100  
// - 1 ≤ Ai ≤ 1,000,000 for each valid `i`  
// - 1 ≤ K ≤ 1,000,000  

// ---

// ## Example

// **Input**

// SOLUTION.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int N,K;
        cin >> N >> K ;
        vector<int> v(N);
        for(int i=0;i<N;i++){
            cin >> v[i];
        }
        int sum = 0;
        for(int i=0;i<N;i++){
            if(v[i]<=K){
                cout << 1 ;
                K = K - v[i];
            }
            else cout << 0 ;
           
        }
        cout << endl;
    }
    

}
