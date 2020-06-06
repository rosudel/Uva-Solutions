#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define endl '\n'
#define all(var) var.begin(), var.end()
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define Fast ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;

struct contestent{
    bool att,solved[10];
    int ts,tp,id;
    int arr[10];
};
bool comp(struct contestent a, struct contestent b){
    if(a.ts != b.ts) return a.ts > b.ts;
    else if( a.tp != b.tp ) return a.tp < b.tp;
    return a.id < b.id;
}
 
int main(){
    int T;scanf("%d\n", &T);

    for(int t = 0; t < T; t++){
        vector<contestent> v(101);
        string s;
        while(getline(cin, s) && s != ""){
            int con, sub, pen; char ver;
            sscanf(s.c_str(), "%d %d %d %c", &con, &sub, &pen, &ver);
            v[con].att = true;
            v[con].id = con;

            if( ver == 'I' )
                v[con].arr[sub]++;
            else if( ver == 'C' && !v[con].solved[sub]){
                v[con].ts++;
                v[con].tp += pen + v[con].arr[sub] * 20;
                v[con].solved[sub] = true;
            }
        }
        sort(all(v), comp);
        for(auto i: v)
            if( i.att )
                cout<< i.id << ' '<< i.ts << ' '<< i.tp << endl;

        if( t!=T-1 )cout << endl;
    }
}
