#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m)); 
        int maxx = 0; 
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
                maxx = max(maxx, arr[i][j]);
            }
        }
        vector<int> row(n, 0), col(m, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == maxx){
                    row[i]++;
                    col[j]++;
                }
            }
        }        
        int colCnt = 0, rowCnt = 0;
        for(int& it: row){
            if(it) rowCnt++;
        }
        for(int& it: col){
            if(it) colCnt++;
        }
        vector<int> rowCount(n, 0), colCount(m, 0); 
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(arr[i][j] == maxx) {
                    if(col[j] == 1) rowCount[i]++;
                    if(row[i] == 1) colCount[j]++;
                }
            }
        }
        bool flag = false;
        for(int& it: rowCount) {
            if(colCnt - it <= 1) {
                flag = true;
                break;
            }
        }
        if(!flag) {
            for(int& it: colCount) {
                if(rowCnt - it <= 1) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout << maxx - 1 << endl;
        else cout << maxx << endl;
    }
    return 0;
}