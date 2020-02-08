#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define endl '\n'
#define all(var) var.begin(), var.end()
typedef long long ll;
using namespace std;

ll bigmod(ll b, ll p, ll m){
    if(p == 0) return 1;
    ll x = bigmod(b, p/2, m) % m;
    x = (x*x) % m;
    if(p & 1) x = (x * b) % m;
    return x%m;
}
int main(){
    ll b,p,m;
    while(cin >> b >> p >> m){
        scanf("\n");
        cout << bigmod(b,p,m) << endl;
    }
}
