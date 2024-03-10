#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
#define vl vector<ll>

void solve(){
  int n; cin >> n;
  vl v(n);
  for(auto &x:v) cin >> x;
  sort(v.begin(), v.end());
  ll sa = 0, sb = 0;
  for(int l = 0, r = n-1; l <= r - 2; l++, r--){
    sa += v[l];
    sb += v[r];
    if(n%2 && l == r-2){
      if(sa > sb) sb += v[l+1];
      else sa += v[r+1];
    }
  }
  cout << abs(sa - sb) << endl;
}

int main(){
  fast_io; 
  //int t; cin>>t; while(t--)
  solve();

  return 0;
}

