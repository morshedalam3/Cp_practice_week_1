#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;cin>>n1>>n2;
    if (n1>n2)
    {
       cout<<'0'<<endl;
    }else{
        int ans = n2-n1;
        cout<<ans+1<<endl;
    }
      
    return 0;
}