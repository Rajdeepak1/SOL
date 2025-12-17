#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> z(n);
        vector<int> z2;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin >> z[i];
        }
        for(int i=0;i<n;i++)
        {
            x=x^z[i];
        }
        if(x==0){
            cout<<0<<endl;
        }
        else{
            if(n%2==0){
                cout<<-1<<endl;
            }
            else{
                cout<<x<<endl;
            }
        }

    }
}
