#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    for ( int i = 0; i*a <=c; i++)
    {
        int remaining = c- i*a;
        if (remaining % b == 0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
      
    return 0;
}