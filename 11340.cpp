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
    fast;
    int tc; 
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        map < char, int > value;
        while(n--){
            char ch; int x;
            cin >> ch >> x;
            value[ch] = x;
        }
        cin >> n;
        double sum = 0;
        cin.ignore();
        while(n--){
            string s; 
            getline(cin , s);
            for(char c: s) sum += value[c];
        }
        printf("%.2lf$\n", sum/100.0);
    }
}
