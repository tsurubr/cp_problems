#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
#define vl vector<ll>

void solve(){
  ll n; cin >> n;
  vl v(n);
  for(auto &x:v) cin >> x;
  map<ll,ll>mp;
  mp[0] = 1;
  ll odd = 0, even = 0;
  for(int i = 0; i < n; i++){
    if(i&1) odd += v[i];
    else even += v[i];
    if(mp.find(even - odd) != mp.end()){
      cout << "YES" << endl;
      return;
    }
    mp[even - odd] = 1;
  }
  cout << "NO" << endl;
}

int main(){
  fast_io; 
  int t; cin>>t; while(t--)
  solve();
  return 0;
}
