#include<bits/stdc++.h>
using namespace std;
int main(){
      string S;
    cin >> S;

    bool seen[26] = {false};

    for (char c : S) {
        if (islower(c)) {
            seen[c - 'a'] = true; 
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            char missingLetter = 'a' + i;
            cout << missingLetter << endl;
            return 0;
        }
    }
    cout << "None" << endl; 

    return 0;
}

// Problem: need to find missing char from given string 