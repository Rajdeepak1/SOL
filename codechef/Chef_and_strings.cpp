// Chef has found two very old sheets of paper, each of which originally contained a string of lowercase Latin letters. The strings on both sheets have equal lengths. However, since the sheets are very old, some letters have become unreadable.

// Chef would like to estimate the difference between these strings.

// Let the first string be S1, and the second string be S2.

// The unreadable symbols are represented by the character '?'.

// The difference between the strings is defined as the number of positions i such that S1[i] ≠ S2[i], where S1[i] and S2[i] are the characters at the i-th position in S1 and S2, respectively.

// Chef would like to know the minimal and the maximal possible difference between the two strings, if he replaces all '?' with lowercase Latin letters.

// Your task is to help Chef determine these values.

// Input

// The first line contains an integer T, the number of test cases.

// For each test case:

// The first line contains a string S1.

// The second line contains a string S2.

// Both strings consist of lowercase Latin letters and '?' symbols in places where the letters are unreadable.

// Output

// For each test case, print two integers separated by a space:

// The minimal difference

// The maximal difference

// Constraints

// 1 ≤ T ≤ 100

// 1 ≤ |S1|, |S2| ≤ 100

// Subtasks

// (25 points): |S1| = 1

// (10 points): Neither S1 nor S2 contains '?'

// (65 points): 1 ≤ |S1|, |S2| ≤ 100

// SOL 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string s1;
	    cin >> s1 ;
	    string s2;
	    cin >> s2;
	    int countMin = 0;
	    int countMax = 0;
	    for(int i=0;i<s1.length();i++){
	        if(s1[i]!=s2[i]) {
	            if(s1[i]!='?' && s2[i]!='?') countMin++;
	            countMax++;
	    }
	    if(s1[i]=='?' && s2[i]=='?') countMax++;
	    
	}
	cout << countMin << " " << countMax << endl;

}
}
