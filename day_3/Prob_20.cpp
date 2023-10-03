#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
    cin >> n; 
    int xor_all = 0;
    for (int i = 1; i <= n; i++) {
        xor_all ^= i;
    }

    int xor_watched = 0;
    for (int i = 0; i < n - 1; i++) {
        int episode;
        cin >> episode; 
        xor_watched ^= episode; 
    }

    int missing_episode = xor_all ^ xor_watched;
    cout << missing_episode << endl;
    return 0;
}

//problemLInk: https://codeforces.com/problemset/problem/440/A