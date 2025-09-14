// Here’s a neatly formatted version of the **TCS Examination** problem statement:

// ---

// # TCS Examination

// Two friends, **Dragon** and **Sloth**, are writing a computer science examination series.
// There are three subjects in this series:

// * **DSA**
// * **TOC**
// * **DM**

// Each subject carries **100 marks**.

// You know the individual scores of both Dragon and Sloth in all 3 subjects.
// You have to determine who got a better rank.

// ### Ranking Rules:

// 1. The person with a **bigger total score** gets a better rank.
// 2. If the total scores are tied, the person with a **higher score in DSA** gets a better rank.
// 3. If the total score and the DSA score are tied, the person with a **higher score in TOC** gets a better rank.
// 4. If everything is tied, they **get the same rank**.

// ---

// ### Input Format

// * The first line of input contains a single integer **T**, denoting the number of test cases.
// * For each test case:

//   * The first line contains three space-separated integers denoting the scores of **Dragon** in **DSA, TOC, and DM** respectively.
//   * The second line contains three space-separated integers denoting the scores of **Sloth** in **DSA, TOC, and DM** respectively.

// ---

// ### Output Format

// For each test case:

// * Output **"Dragon"** if Dragon got a better rank.
// * Output **"Sloth"** if Sloth got a better rank.
// * Output **"Tie"** if they got the same rank.

// > The output is **case insensitive**. For example:
// > `Tie`, `tie`, `tIe` → all are considered correct.

// SOL

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int dragon[3], sloth[3];
        for(int i=0;i<3;i++) cin >> dragon[i]; 
        for(int i=0;i<3;i++) cin >> sloth[i];  

        int sumDragon = dragon[0] + dragon[1] + dragon[2];
        int sumSloth  = sloth[0]  + sloth[1]  + sloth[2];

        if(sumDragon > sumSloth) cout << "DRAGON\n";
        else if(sumSloth > sumDragon) cout << "SLOTH\n";
        else {
          
            if(dragon[0] > sloth[0]) cout << "DRAGON\n";
            else if(sloth[0] > dragon[0]) cout << "SLOTH\n";
            else {

                if(dragon[1] > sloth[1]) cout << "DRAGON\n";
                else if(sloth[1] > dragon[1]) cout << "SLOTH\n";
                else cout << "TIE\n";
            }
        }
    }
    return 0;
}

