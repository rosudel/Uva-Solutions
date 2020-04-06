#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(var) var.begin(), var.end()
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;
 
int main(){
    ll n, counter = 0;
    while(cin >> n && n != 0){
        vector<ll> num(n);
        for(ll &i: num) cin >> i;
        printf("Case %d:\n", counter+1);
        int i = 0;
        while(i < n){
            int cnt = 0, j;
            for(j = i+1; j < n; j++){
                if(num[j] - num[j-1] != 1)
                    break;
                cnt++;
            }
            if(cnt > 0){
                cout << "0" << num[i] << "-";
                string s1 = to_string(num[i]);
                string s2 = to_string(num[j-1]);
                int k;
                for(k = 0; k < s1.size(); k++){
                    if(s1[k] != s2[k]) break;
                }
                string a(s2.begin()+k, s2.end());
                cout << a << endl;
            }
            else
                cout << "0" << num[i] << endl;
            i = j;
        }
        cout << endl;
        counter++;
    }
}
