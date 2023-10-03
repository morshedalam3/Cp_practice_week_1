#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
       // Initialize a vector to keep track of the number of times each problem is solved
        vector<int> solved(26, 0);
        // Initialize a vector to keep track of which team solved each problem first
        vector<int> firstSolved(26, -1);
        int totalBalloons = 0;

        for (int i = 0; i < n; i++) {
            char problem = s[i];
            // Convert the problem letter to an index (0-25)
            int problemIndex = problem - 'A';
           // If this is the first time the problem is solved, the team gets an additional balloon
            if (firstSolved[problemIndex] == -1) {
                firstSolved[problemIndex] = i;
                totalBalloons += 2;
            } else {
                totalBalloons++;
            }
             // Increment the count of times the problem is solved
            solved[problemIndex]++;
        }
        
        cout << totalBalloons << endl;
    }

    return 0;
}

// Problem: count 2 for the first char else count 1 for the repete char
