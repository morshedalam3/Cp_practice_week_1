#include <bits/stdc++.h>
using namespace std;

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

        int operations = 0;
        int prev = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > i + 1 + prev) {
                operations += (a[i] - (i + 1 + prev));
                prev += (a[i] - (i + 1 + prev));
            }
        }

        cout << operations << endl;
    }

    return 0;
}
