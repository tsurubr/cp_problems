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
    ll x, y; cin >> x >> y;
    ll z = max(x, y);
    ll major = z * z, minor = major - (z-1) * 2, mid = (major+minor)/2, ans = 0;


    if(z%2 == 0){
        ans = x<z? minor + x - 1 : major - y + 1;
    } else{
        ans = x<z? major - x + 1 : minor + y - 1;
    }
    cout << ans << endl;
}
 
signed main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t; while(t--)
	solve();
 
	return 0;
}              