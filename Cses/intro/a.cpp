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
    vector<ll> v(n+n);
    bool zero = false;

    if(n == 1){
        ll b = 0; cin >> b;
        cout << b-1 << endl; return;
    }

    for(int i =0; i < n; i++){
        ll a; cin >> a;
        v[i] = a;
        if(v[i] == 0) zero = true; 
    }

    ll ans = 0;
// cada vez que ele passa, o atual for diferente ou menor que o da frente, ele incrementa. Se for zero, ele soma todos depois dele.

    for(int j = 0; j < n - 1; j++){
        if(zero == true){
            ans += v[j];
        } else{
            if(v[j] > v[j+1])ans++;
        }
    }

    cout << ans << endl;
}
 
signed main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t; while(t--)
	solve();
 
	return 0;
}