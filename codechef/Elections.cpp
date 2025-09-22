// Elections in Chefland

// There are 101 citizens in Chefland. It is election time and 3 parties — A, B, and C — are contesting.

// Party A receives XA votes.

// Party B receives XB votes.

// Party C receives XC votes.

// A party is said to have a clear majority if it receives strictly greater than 50 votes.

// If any party has a clear majority, print the winning party (A, B, or C).
// Otherwise, print NOTA.

// Input Format

// The first line contains a single integer T, the number of test cases.

// Each of the next T lines contains 3 space-separated integers:

// XA — votes for Party A

// XB — votes for Party B

// XC — votes for Party C

// Output Format

// For each test case:

// Print A, B, or C, if the corresponding party has a clear majority.

// Otherwise, print NOTA.

// (Case-insensitive: e.g., "Nota", "nota", "NOTA" are all valid.)

// Constraints

// 1 ≤ T ≤ 500

// 0 ≤ XA, XB, XC ≤ 101

// XA + XB + XC = 101

// don't know why it is rated 1034 

// SOL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a>50) cout<< "A\n";
	    else if(b>50) cout << "B\n";
	    else if(c>50) cout << "C\n";
	    else cout << "NOTA\n";
	}
    return 0;
}
