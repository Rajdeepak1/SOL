#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int c,g,l;
    cin >> c >> g >> l;

    vector<int> v = {c,g,l};

    sort(v.begin(),v.end());

    int diff = v[2] - v[0];

    if(diff >= 10) cout << "check again\n";
    else cout << "final " << v[1] << endl;
    
    return 0;
}