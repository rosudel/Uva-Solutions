#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll &i: v) cin >> i;
        sort(v.begin(), v.end());
        ll mid = v[n/2];
        ll sum = 0;
        for(ll i: v) sum += abs(mid-i);
        cout << sum << endl;
    }
}

