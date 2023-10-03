#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
      for (int i = 0; i < s.length(); i+=2)
      {
        char c = s[i];
        cout<<c;
      }
      
    return 0;
}
// problem: need to print odd index of given string