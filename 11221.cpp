#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(var) var.begin(), var.end()
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;

bool pal(string s){
    string cp = s;
    reverse(all(cp));
    return cp == s;
}
 
int main(){
    /* input, output; */
    int tc; cin >> tc;
    cin.ignore();
    for(int t = 1; t <= tc; t++){
        string str, s;
        getline(cin , str);
        for(auto ch: str) 
            if( ch >= 'a' && ch <= 'z' )
                s.push_back(ch);
        int sq = sqrt(s.size());
        auto NO = [](){
            cout << "No magic :(" <<endl;
        };
        printf("Case #%d:\n", t);
        if( sq*sq == s.size() && pal(s)) cout << sq << endl;
        else NO();
    }
}
