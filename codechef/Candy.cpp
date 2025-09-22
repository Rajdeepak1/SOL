// Candies Problem

// Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.

// For the prices of the candies to be valid, Abhi's boss laid down the following condition:

// A given type of candy must have distinct prices in all N cities.

// In his excitement, Abhi wrote down the prices of both types of candies on the same page and in random order, instead of writing them separately. Now he is asking for your help to find out if the prices he wrote are valid or not.

// You are given an array A of size 2N. You need to determine whether it is possible to split A into two arrays of length N each, such that both arrays consist of distinct elements.

// Note: Both arrays can have distinct elements only if no element in the original array appears more than twice.

// Input Format

// The first line contains an integer T, the number of test cases.

// Each test case consists of two lines:

// The first line contains a single integer N, the number of cities.

// The second line contains 2N space-separated integers:

// A1, A2, …, A2N


// representing the elements of array A.

// Output Format

// For each test case, output a single line:

// "Yes" if it is possible to split the array into two arrays with distinct elements.

// "No" otherwise.

// The output is case-insensitive (e.g., Yes, YES, yEs are all valid).

// Constraints

// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000
// 1 ≤ A_i ≤ 10^9
// The sum of N over all test cases does not exceed 2000


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
        vector<int> prices(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> prices[i];
        }

        sort(prices.begin(), prices.end());

        int uniqueVals[2 * n], freq[2 * n];
        int idx = 0;

        int count = 1;

        for (int i = 1; i < 2 * n; i++)
        {
            if (prices[i] == prices[i - 1])
            {
                count++;
            }
            else
            {
                uniqueVals[idx] = prices[i - 1];
                freq[idx] = count;
                idx++;
                count = 1;
            }
        }

        uniqueVals[idx] = prices[2 * n - 1];
        freq[idx] = count;
        idx++;

        int result = 0;
        for (int i = 0; i < idx; i++)
        {
            if (freq[i] > 2)
            {
                result = 1;
                break; 
            }
        }

        if (result > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
