#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define F first
#define S second
#define ll long long
#define ld long double
#define sz(x) (int)x.size()
#define MAXN  10000000

void solve(){
    int height, width;
	int scale;
	cin >> height >> width >> scale;

	vector<string> signal(height);
	for (string &r : signal) { cin >> r; }

	for (int i = 0; i < scale * height; i++) {
		for (int j = 0; j < scale * width; j++) {
			cout << signal[i / scale][j / scale];
		}
		cout << '\n';
	}
}
 
signed main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	//int t; cin>>t; while(t--)
	solve();
 
	return 0;
}