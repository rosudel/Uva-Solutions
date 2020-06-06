#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#define endl '\n'
#define uset unordered_set
#define umap unordered_map
#define all(var) var.begin(), var.end()
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define Fast ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
typedef long long ll;
using namespace std;

ll fn(ll n){
    ll cnt = 0;
    do{
        if( n&1 ) n = 3*n+1;
        else n /= 2;
        cnt++;
    }while(n != 1);
    return cnt;
}
int main(){
    ll a,b;
    while(cin >> a >> b){
        if(!a && !b) break;
        if(a > b) swap(a,b);
        ll ans, v;
        ans = a; v = fn(a);
        for(ll i = a+1; i <= b; i++){
            ll f = fn(i);
            if(f > v){
                ans = i;
                v = f;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", a, b, ans, v);
    }

}


