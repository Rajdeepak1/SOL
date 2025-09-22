// // A useful solution to the problem of counting the frequency of each digit of elements of an array[n] :-
// // for its solution i thought of creating two new arrays, array named as uniqueEle[n] and freq[n],

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     // First we will sort the elements of array so that it will be easy for us to count the frequency of each digit as same elements will adjacent to each other , so on so.
//     sort(arr.begin(),arr.end());

//     int uniqueVal[n],freq[n];
//     int idx=0;
//     int count =1;
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             count++;
//         }
//         else{
//             uniqueVal[idx]=arr[i-1];
//             freq[idx] = count;
//             idx++;
//             count=1; // here we are resetting the value of count to 1 for counting the frequency of next element
//         }
//     }
//         // above peice of code stores unique elements in the uniqueval[n] and frequency of each unique element in the freq[n] but it has one issue it only stores the previous element when the next element to previous is equals to previous , problem occurs for last element it doesn't have any next element to compare with hence another block of code comes into the game.
//         uniqueVal[idx] = arr[n-1];
//         freq[idx] = count;
//         idx++;

//         for(int i=0;i<idx;i++){
//             cout << uniqueVal[i] << " " << freq[i] ;
//         }
//     }
// A useful solution to the problem of counting the frequency of each digit of elements of an array[n] :-
// for its solution i thought of creating two new arrays, array named as uniqueEle[n] and freq[n],

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // First we will sort the elements of array so that it will be easy for us to count the frequency of each digit as same elements will adjacent to each other , so on so.
    sort(arr.begin(),arr.end());

    int uniqueVal[n],freq[n];
    int idx=0;
    int count =1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            uniqueVal[idx]=arr[i-1];
            freq[idx] = count;
            idx++;
            count=1; // here we are resetting the value of count to 1 for counting the frequency of next element
        }
    }
        // above peice of code stores unique elements in the uniqueval[n] and frequency of each unique element in the freq[n] but it has one issue it only stores the previous element when the next element to previous is equals to previous , problem occurs for last element it doesn't have any next element to compare with hence another block of code comes into the game.
        uniqueVal[idx] = arr[n-1];
        freq[idx] = count;
        idx++;

        for(int i=0;i<idx;i++){
            cout << uniqueVal[i] << " " << freq[i] ;
        }
    }
