// Problem: Break the Stick

// Chef has a stick of length N.
// He can break the stick into 2 or more parts such that the parity of length of each part is the same.

// Example:

// A stick of length 11 can be broken into {3, 3, 5} since each part is odd.

// But it cannot be broken into {5, 6} since one is odd and the other is even.

// Chef can apply this operation repeatedly on smaller sticks as many times as he likes.

// Your task is to determine if Chef can obtain a stick of length exactly X.

// Input Format

// The first line contains a single integer T — the number of test cases.

// Each test case contains two integers N, X separated by a space.

// Output Format

// For each test case, print:

// YES if Chef can obtain a stick of length exactly X.

// NO otherwise.

// (You can print answers in any case: YES, Yes, yes are all acceptable.)

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ X < N ≤ 10^9

// SOL

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(x%2==1 || n%2==0) cout << "YES\n" ;
        else cout << "NO\n";
    }
    return 0;
}
