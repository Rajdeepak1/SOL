// Encoding Message

// Chef recently graduated in Computer Science and got a job at ShareChat.
// His first task is to implement a message encoding feature to ensure chat privacy and security.

// Chef has a message represented as a string S of length N containing only lowercase English letters.
// The encoding is done in two steps:

// Step 1: Pairwise Swapping

// Swap the 1st and 2nd characters of S, then the 3rd and 4th, then the 5th and 6th, and so on.

// If the length N is odd, the last character remains unchanged.

// Step 2: Alphabet Mirroring

// Replace each letter with its "opposite" in the alphabet:

// 'a' ↔ 'z'

// 'b' ↔ 'y'

// 'c' ↔ 'x'

// …

// 'z' ↔ 'a'

// This transformation is also called the Atbash cipher.

// Input

// The first line contains an integer T — the number of test cases.

// Each test case consists of:

// An integer N — the length of the string.

// A string S of length N.

// Output

// For each test case, print the encoded message in a new line.

// Constraints

// 1 ≤ T ≤ 1000

// 1 ≤ N ≤ 100

// |S| = N

// S contains only lowercase English letters

// SOL 
// i am having two solutions for this one is lenghty one and another one is its concise form but the logic is same only the representation is concise 

// lenghty solution for this 


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         if (n % 2 == 0) {
//             for (int i = 0; i < n; i += 2) {
//                 char ch = s[i];
//                 s[i] = s[i+1];
//                 s[i+1] = ch;
//             }
//         } else {
//             for (int i = 0; i < n - 1; i += 2) {
//                 char ch = s[i];
//                 s[i] = s[i+1];
//                 s[i+1] = ch;
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             if (s[i] == 'a') s[i] = 'z';
//             else if (s[i] == 'b') s[i] = 'y';
//             else if (s[i] == 'c') s[i] = 'x';
//             else if (s[i] == 'd') s[i] = 'w';
//             else if (s[i] == 'e') s[i] = 'v';
//             else if (s[i] == 'f') s[i] = 'u';
//             else if (s[i] == 'g') s[i] = 't';
//             else if (s[i] == 'h') s[i] = 's';
//             else if (s[i] == 'i') s[i] = 'r';
//             else if (s[i] == 'j') s[i] = 'q';
//             else if (s[i] == 'k') s[i] = 'p';
//             else if (s[i] == 'l') s[i] = 'o';
//             else if (s[i] == 'm') s[i] = 'n';
//             else if (s[i] == 'n') s[i] = 'm';
//             else if (s[i] == 'o') s[i] = 'l';
//             else if (s[i] == 'p') s[i] = 'k';
//             else if (s[i] == 'q') s[i] = 'j';
//             else if (s[i] == 'r') s[i] = 'i';
//             else if (s[i] == 's') s[i] = 'h';
//             else if (s[i] == 't') s[i] = 'g';
//             else if (s[i] == 'u') s[i] = 'f';
//             else if (s[i] == 'v') s[i] = 'e';
//             else if (s[i] == 'w') s[i] = 'd';
//             else if (s[i] == 'x') s[i] = 'c';
//             else if (s[i] == 'y') s[i] = 'b';
//             else if (s[i] == 'z') s[i] = 'a';
//         }

//         cout << s << endl;  
//     }

//     return 0;
// }


// optimised or conicised code which should be taken into consideration 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n - 1; i += 2) {
            swap(s[i], s[i+1]);
        }

        for (int i = 0; i < n; i++) {
            s[i] = 'a' + ('z' - s[i]); //Atbash cipher (mirror alphabet) formula
        }

        cout << s << endl;
    }
    return 0;
}
  