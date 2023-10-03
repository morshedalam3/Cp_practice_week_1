#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<set<string>> words(3);
        
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                string word;
                cin >> word;
                words[i].insert(word);
            }
        }
        
        map<string, int> wordCount;
        
        for (int i = 0; i < 3; ++i) {
            for (const string& word : words[i]) {
                wordCount[word]++;
            }
        }
        
        int playerPoints[3] = {0, 0, 0};
        
        for (int i = 0; i < 3; ++i) {
            for (const string& word : words[i]) {
                if (wordCount[word] == 1) {
                    playerPoints[i] += 3;
                } else if (wordCount[word] == 2) {
                    playerPoints[i] += 1;
                }
            }
        }
        
        cout << playerPoints[0] << " " << playerPoints[1] << " " << playerPoints[2] << endl;
    }  
    return 0;
}