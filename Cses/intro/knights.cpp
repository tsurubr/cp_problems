#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define F first
#define S second
#define ll long long
#define ld long double
#define sz(x) (int)x.size()
#define MAXN  10000000
 
#include <bits/stdc++.h>
using namespace std;


void solve(){
    ll n; cin >> n;
    for(ll i = 1; i <= n; ++i){
        ll all = ((i*i)*((i*i)-1))/2;
        ll cant = 4*(i-1)*(i-2);
        cout << all - cant << endl;
    }
}
 
signed main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	//int t; cin>>t; while(t--)
	solve();
 
	return 0;
}