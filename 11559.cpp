using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define sf(parm) scanf("%ld", &parm)
typedef long long ll;

int main(){
    ll n,b,h,w;
    while(scanf("%ld%ld%ld%ld", &n, &b, &h, &w) == 4){
        ll cost = 500005;
        while(h--){
            ll price; cin >> price;

            for(ll i = 0; i < w; i++){
                 ll var; sf(var);
                 if(var >= n){
                     cost = min(cost, price*n);
                 }
            }
        }
        if(cost > b)
            cout << "stay home\n";
        else
            cout << cost << '\n';
    }
}
