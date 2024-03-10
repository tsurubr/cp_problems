#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m, ans = 0; cin >> n >> m;
    vector <pair<int, int>> road(n), car(m);
    for(auto &x: road){
       cin >> x.first >> x.second; 
    }
    for(auto &x: car){
       cin >> x.first >> x.second;
    }
    for(int i = 1; i < n; i++) road[i].first += road[i-1].first;
    for(int i = 1; i < m; i++) car[i].first += car[i-1].first;
    for(int i = 0, j = 1; i < n;){
        cout << i << ' ' << j << endl;
        if(car[i].first > road[j-1].first && car[i].first <= road[j].first){
            if(car[i].second > road[j-1].second) ans = max(ans, (car[i].second - road[j-1].second));
            else i++;    
            j++; 
        } else i++;
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //int t; cin>>t; while(t--)
    solve();

    return 0;
}

