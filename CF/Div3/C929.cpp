#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void solve(){
  int a, b, l; cin >> a >> b >> l;
  set<int>s;
  while(1){
    ll n = l;
    while(1){
      s.insert(n);
      if(n%a != 0) break;
      n /= a;
    }
    if(l%b != 0) break;
    l /= b; 
  }
  cout << s.size() << endl;
}

int main(){
  fast_io; 
  int t; cin>>t; while(t--)
  solve();
  return 0;
}
