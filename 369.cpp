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

ll table[100][100];

ll ncr(ll n, ll r){
    if(n == r) return 1;
    if(r == 1) return n;
    if(table[n][r] == 0)
        table[n][r] = ncr(n-1, r)+ncr(n-1,r-1);
    return table[n][r];
}
int main(){
    ll n,r;
    while(cin >> n >> r){
        if(n == 0)
            return 0;
        cout << n << " things taken " << r << " at a time is " << ncr(n,r) << " exactly." << endl;
    }
}
