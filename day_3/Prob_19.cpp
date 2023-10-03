#include<bits/stdc++.h>
using namespace std;
  int main() {
    int n;
    cin >> n;
    vector<int> integers(n);

    long long int evenSum = 0;
    long long int oddSum = 0;
    int minOdd = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> integers[i];
        if (integers[i] % 2 == 0) {
            evenSum += integers[i];
        } else {
            oddSum += integers[i];
            minOdd = min(minOdd, integers[i]);
        }
    }

    if (oddSum % 2 == 0) {
        cout << evenSum + oddSum << endl;
    } else {
        cout << evenSum + oddSum - minOdd << endl;
    }

    return 0;
}

//problemLink: https://codeforces.com/problemset/problem/621/A