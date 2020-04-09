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
 
int M = 50000;
vector<bool> prime(M, true);

void sieve(){
    prime[0] = prime[1] = false;
    for(int i = 2; i <= sqrt(M); i++){
        if( prime[i] )
            for(int j = i*i; j <= M; j += i)
                prime[j] = false;
    }
}
int main(){
    sieve();
    int n; 
    while(cin >> n && n != 0){
        map < pair<int, int>, bool> mp;
        int cp = n ,cnt = 0;
        while(true && n != 1){
            n--;
            if( prime[n] && prime[cp-n] ){
                if( mp[{n, cp-n}] || mp[{cp-n, n}])
                    continue;
                else{
                    mp[{n,cp-n}] = true;
                    mp[{cp-n,n}] = true;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}

