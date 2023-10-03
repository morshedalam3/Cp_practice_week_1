#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    int i,ans = -1;
    for ( i = a; i <=b; i++)
    {
        if (i%c==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
      
    return 0;
}