#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    
    vector<vector<char>>spotty(n, vector<char> (m));
    for(auto &row: spotty){
        for(auto &element: row){
            cin >> element;
        }
    }
    
    vector<vector<char>>plain(n, vector<char> (m));
    for(auto &row: plain){
        for(auto &element: row){
            cin >> element;
        }
    }

    
    int pos = 0;
    vector<int> positions;
    for(int i = 0; i<m; i++){
        pos = 1;
        for(int j = 1; j<n; j++){
            if(plain[j][i] == plain[j-1][i]) pos++;
        }
        if(pos == n) positions.push_back(i);
    }

    int ans = 0;
    for(auto &p: positions){
        pos = 0;
        for(int j = 0; j < n; j++){
            if(spotty[j][p] != plain[j][p]) pos++;
        }
        if(pos == n){
            ans++; 
        }
    }
    cout << ans << endl;
}


int main(){
    solve();
    return 0;
}