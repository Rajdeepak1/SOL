// Problem Statement

// You are given a string S of length N.
// You may perform the following operation any number of times:

// Choose a non-empty substring of S (it can even be the whole string) such that each character in the substring occurs an even number of times, and erase this substring from S.

// After erasing, the parts before and after the removed substring are concatenated, and you may continue with the new shorter string.

// Goal: Determine if it is possible to erase the entire string S by performing one or more such operations.

// Example

// Input: "acabbad"

// We can erase "abba" (all characters occur an even number of times).

// Remaining string: "acd".

// "acd" cannot be erased further.

// Answer: NO

// Input Format

// The first line contains a single integer T — the number of test cases.

// For each test case:

// The first line contains an integer N — the length of the string.

// The second line contains the string S.

// Output Format

// For each test case, print:

// "YES" if it is possible to erase the entire string,

// "NO" otherwise.

// Constraints

// 1 ≤ T ≤ 200

// 1 ≤ N ≤ 1000

// S contains only lowercase English letters
// S consists only of lowercase English letters.

// SOL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26] = {0};

        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
                freq[c - 'a']++;
            }
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
                count++;
        }
        if (count)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
