#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double discount = ((a - b) / a * 100);
    cout << fixed << setprecision(1)<<discount;
    return 0;
}
