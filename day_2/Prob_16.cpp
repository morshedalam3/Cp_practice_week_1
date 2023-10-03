#include<bits/stdc++.h>
using namespace std;
int main(){
      int S, T;
    cin >> S >> T;
    int count = 0;
    for (int a = 0; a <= S; a++) {
        for (int b = 0; b <= S - a; b++) {
            for (int c = 0; c<=S;c++)
            {
                if (a+b+c<=S & a*b*c<=T) {
                count++;
            }
            }
        }
    }
    cout<<count<<endl;

    return 0;
}

// Problem:  need to count the number of ordered triples of non-negative integers (a, b, c) that satisfy both of these conditions:a+b+c<=S & a*b*c<=T