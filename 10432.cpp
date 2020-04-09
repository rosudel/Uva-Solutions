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
    double r, n;
    while(cin >> r >> n){
        double twopi = 2*acos(-1.0);
        double area = (r*r*n*sin(twopi/n))/2;
        printf("%.3lf\n", area);
    }
}
