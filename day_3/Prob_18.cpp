#include<bits/stdc++.h>
using namespace std;
int min_operations_to_satisfy_condition(int n, vector<int>& a) {
    int operations = 0;
    for (int i = n - 1; i >= 0; i--) {
        operations = max(operations, a[i] - i);
    }
    return operations;
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int result = min_operations_to_satisfy_condition(n, a);
        cout << result << endl;
    }
    
    return 0;
}

//problemLink: https://codeforces.com/problemset/problem/1604/A