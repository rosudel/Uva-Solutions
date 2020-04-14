#include <bits/stdc++.h>
#define endl '\n'
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(var) var.begin(), var.end()
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;
 
int main(){
    int n; 
    list < int > List;
    while(cin >> n){
        auto f = upper_bound(all(List), n);
        List.insert(f, n);
        auto mid = List.begin();
        advance(mid, List.size()/2);
        if( List.size()&1 ) cout << *mid << endl;
        else{
            int ans = (*mid + *--mid)/2;
            cout << ans << endl;
        }
    }
}
