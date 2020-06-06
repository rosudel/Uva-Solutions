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

int main(){
    int n, r;
    int i = 1;
    while(cin >> n >> r){
        if( !n && !r ) break;
        cout << "Case "<<i<<": ";
        if(r*26+r < n){
            cout << "impossible" << endl;
        }
        else{
            n -= r;
            int ans = (n/r)+ (n%r > 0);
            cout << ans << endl;
        }
        i++;
    }
}


