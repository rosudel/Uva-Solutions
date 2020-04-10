#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
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
    while(cin >> n){
        vector<bool> table(n+1, false);
        vector<int> v(n);
        for(int &i: v) cin >> i;

        for(int i = 1; i < n; i++)
            table[abs(v[i]-v[i-1])] = true;

        bool ok = true;
        for(int i = 1; i < n; i++)
            if( !table[i] ){
                ok = false;
                break;
            }
        if(ok) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
}
