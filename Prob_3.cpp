#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;cin>>n1>>n2;
    if (n1==n2)
    {
       cout<<n1*2<<endl;
    }else if (n1>n2)
    {
        cout<<n1+ (n1-1)<<endl;
    }else{
        cout<<n2+(n2-1)<<endl;
    } 
    return 0;
}