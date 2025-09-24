// The task is how to calculate the frequency of each alphabet in a string.
// This is done using range based for loop.
#include<iostream>
using namespace std;
int main(){

    string s;
           cin >> s;
           int freq[26] = {0}; 
       for (char c : s) {
           if (c >= 'a' && c <= 'z') {
               freq[c - 'a']++; 
           }
           }
           
}