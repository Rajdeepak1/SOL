// Bear and Candies 123
// Read problems statements in Mandarin Chinese, Russian and Vietnamese as well.
// Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.

// Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.

// Input
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

// The only line of each test case contains two integers A and B denoting the maximum possible number of candies Limak can eat and the maximum possible number of candies Bob can eat respectively.

// Output
// For each test case, output a single line containing one string — the name of the winner ("Limak" or "Bob" without the quotes).

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A, B ≤ 1000  

// i believe this was a good question for me bwcause i wasn't able to solve it alone by myself although i cracked the logic but was unable to crack it's code in the first go it was rated around 1028.

// SOL 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int candies = 1;
        bool limakturn = true;
        while(true){
            if(limakturn){
                if(a>=candies){
                    a = a-candies;
                }
                else{
                    cout << "Bob\n";
                    break;
                }
            }
            else{
                if(b>=candies){
                    b = b-candies;
                }
                else{
                    cout << "Limak\n";
                    break;
                }
            }
            candies++;
            limakturn = !limakturn;
        }
    }
 return 0;
}
