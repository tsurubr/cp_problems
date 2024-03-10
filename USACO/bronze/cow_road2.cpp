#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void solve(){
  stack<char>s, res;
  set<char>setc;
  char c; cin >> c;
  s.push(c);
  int ans = 0;
  while(cin >> c){
    if(setc.count(c)){
      if(s.top() == c) s.pop();
      else{
        do{
          res.push(s.top());
          s.pop();
          ans++;
        }while(s.top()!=c);
        s.pop();
        while(!res.empty()){
          s.push(res.top());
          res.pop();
        }
      }
    }else{
      setc.insert(c);
      s.push(c);
    } 
  }
  cout << ans << endl;
}

int main(){
  fast_io; 
  //int t; cin>>t; while(t--)
  //freopen("circlecross.in", "r", stdin);
	//freopen("circlecross.out", "w", stdout);
  solve();

  return 0;
}

