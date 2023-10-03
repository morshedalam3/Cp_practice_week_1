#include<bits/stdc++.h>
using namespace std;
int main(){
      int A, B;
    double T;
    cin >> A >> B >> T;

    int biscuitsProduced = 0;
    double currentTime = A;
    while (currentTime <= T + 0.5) {
        biscuitsProduced += B;
        currentTime += A;
    }

    cout<< biscuitsProduced <<endl;  
    return 0;
}