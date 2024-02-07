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
	string s; cin >> s;
	deque <char> min, mai;
	
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'b'){
			if(!min.empty()){
				min.pop_back();
			}
        } else if(s[i] == 'B'){
			if(!mai.empty()){
				mai.pop_back();
			}
        } else{
			isupper(s[i])? mai.push_back(s[i]) : min.push_back(s[i]);
		}
    }

	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'b' || s[i] == 'B') continue;
		
		if(isupper(s[i]) && !mai.empty()){
			cout << mai.front();
			mai.pop_front();
			
		} else if(!isupper(s[i]) && !min.empty()){
			cout << min.front();
			min.pop_front();
		}
	}
	cout << endl;
}
	
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t; while(t--)
	solve();
 
	return 0;
}