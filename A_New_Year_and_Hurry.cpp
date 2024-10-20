#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int maxTimeForQuestions = 240 - k;
    int count = 0;
    int currQuesTime = 0;
    for(int i=1; i<=n; ++i) {
        if(i*5 + currQuesTime <= maxTimeForQuestions) {
            currQuesTime += i*5;
            ++count;
        } else break;
    }
    cout << count << endl;
    return 0;
}