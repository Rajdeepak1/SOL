// Adjacent Sum Parity

// Chef has an array A of length N.

// Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A. Formally:

// B[i] = (A[i] + A[i+1]) % 2   for 1 ≤ i ≤ N-1
// B[N] = (A[N] + A[1]) % 2

// Here, x % y denotes the remainder obtained when x is divided by y.

// Chef lost the array A and needs your help.
// Given array B, determine whether there exists any valid array A which could have formed B.


// Input Format
// -------------
// - The first line contains a single integer T — the number of test cases.
// - For each test case:
//   - The first line contains an integer N — the size of the array A.
//   - The second line contains N space-separated integers 
//     B1, B2, …, BN — denoting the array B.


// Output Format
// --------------
// For each test case, output YES if there exists a valid array A, NO otherwise.

// You can print YES/NO in any case (e.g. YES, Yes, yEs are all considered the same).


// Constraints
// ------------
// 1 ≤ T ≤ 1000
// 2 ≤ N ≤ 10^5
// B[i] ∈ {0, 1}
// The sum of N over all test cases does not exceed 3 ⋅ 10^5

// SOL 
//  i believe this is not the correct solution code for this question i will be doing that too , but for now just uploading the the trick solution one that i observed from the input and output pattern

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count1 = 0;
        for(int i=0; i<n; i++){
            int b;
            cin >> b;
            if(b == 1) {
                count1++;
            }
        }
        if(count1 % 2 != 0)  cout << "NO\n";
        else  cout << "YES\n";
        
    }
    
}