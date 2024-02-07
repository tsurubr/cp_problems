    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;

    void solve() {                                         
        ll n; cin >> n;
        vector<ll> t(n);
        string s(n, 'a');
        for (auto &x:t) cin >> x;
        vector<int>v(26, 0);

        for(int i = 0; i < n; i++){
            int j = 0;
            for(int j = 0; j < 26; j++) {
                if(t[j] == v[i]) {
                    s += ('a' + j); v[j]++;
                    break;
                }
            }        
        }
        cout << s << endl;
    }

    int main() {
        ios_base::sync_with_stdio(0); cin.tie(0);
        int t; cin >> t; while (t--) 
        solve();

        return 0;
    }

