#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

vl psum(const vl &v, int k) {
  vl psum(v.size(), 0);
  for(int i = 0; i < v.size(); i++){
    psum[i+1] += psum[i];
    if(v[i] == k) psum[i+1]++;
  }
  return psum;
}

void solve(){
  int n, q; cin >> n >> q;
  vl v(n); 
  for(auto &x: v) cin >> x;
  vl a = psum(v, 1);
  vl b = psum(v,2);
  vl c = psum(v,3);
  for(int i = 0; i < q; i++){
    int x, y; cin >> x >> y; x--;
    cout << a[y] - a[x] << ' ';
    cout << b[y] - b[x] << ' ';
    cout << c[y] - c[x] << endl;
  }
}

int main(){
  fast_io;
  freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
  //int t; cin>>t; while(t--)
  solve();

  return 0;
}

