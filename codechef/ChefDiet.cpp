// Here’s the **problem statement properly formatted** so you can easily paste it into a text editor:

// ---

// ### Problem Statement: Chef Diet

// Chef decided to go on a diet during the following **N** days (numbered `1` through `N`).
// Part of the diet plan is to eat **K** grams of protein each day.

// For each valid day `i`:

// * Chef buys `A[i]` grams of protein in the morning of the `i`-th day.
// * He then eats **K** grams of protein at dinner.
// * If he has any protein remaining, he stores it and can use it on later days.

// Initially, Chef has **0 grams** of protein stored.

// You need to determine whether Chef will always have enough protein during his diet.
// If not, find the **first day** when Chef will be unable to eat **K** grams of protein.

// ---

// ### Input Format

// * The first line contains a single integer `T` — the number of test cases.
// * The description of each test case follows:

//   * The first line of each test case contains two integers `N` and `K`.
//   * The second line contains `N` space-separated integers `A[1], A[2], …, A[N]`.

// ---

// ### Output Format

// For each test case:

// * If Chef has enough protein for all days, print:

//   ```
//   YES
//   ```
// * Otherwise, print:

//   ```
//   NO X
//   ```

//   where `X` is the first day when Chef fails to have at least `K` grams.

// ---

// ### Constraints

// ```
// 1 ≤ T ≤ 200
// 1 ≤ N ≤ 100
// 1 ≤ K ≤ 10^6
// 1 ≤ A[i] ≤ 10^6   (for each valid i)
// ```

// SOL 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int rem = 0;
        bool possible = true;
        int day = 0;

        for (int i = 0; i < n; i++) {
            if ((arr[i] + rem) < k) {
                possible = false;
                day = i + 1;
                break;
            } else {
                rem = (arr[i] + rem) - k;
            }
        }

        if (possible) {
            cout << "YES\n" ;
        } else {
            cout << "NO " << day << endl;
        }
    }
    return 0;
}

