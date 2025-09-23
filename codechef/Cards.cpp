// Problem Statement

// You have N cards placed on a table. The i-th card has a number Aᵢ written on it.

// In one move, you can remove any one card from the table.

// Your task is to find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.

// Input Format

// The first line contains a single integer T — the number of test cases.

// For each test case:

// The first line contains an integer N — the number of cards.

// The second line contains N space-separated integers A₁, A₂, …, Aₙ, where Aᵢ is the number written on the i-th card.

// Output Format

// For each test case, print the minimum number of moves required so that all the cards remaining on the table have the same number.

// Constraints

// 1 ≤ T ≤ 100

// 1 ≤ N ≤ 100

// 1 ≤ Aᵢ ≤ 10

// SOL  

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cards(n);
        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
        }

        vector<int> freq(11); 

        for (int i = 0; i < n; i++) {
            freq[cards[i]]++;
        } 
                     
        int maxFreq = 0;
        for (int i = 1; i <= 10; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }

        cout << n - maxFreq << endl;
    }
    return 0;
}