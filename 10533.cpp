#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define vi vector < int > 
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define debug freopen("input", "r", stdin);freopen("output", "w", stdout)
#define endl '\n'
#define all(var) var.begin(), var.end()
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;
void sieve();
void preSum();
bool digitPrime(int n);

int const MAX = 1e6;
vector <bool> prime(MAX ,true);
vi pref(MAX);

void sieve(){
    prime[0] = prime[1] = false;
    for(int i = 4; i < MAX; i+=2)
        prime[i] = false;
    for(int i = 3; i*i <= MAX; i += 2)
        if(prime[i])
            for(int j = i*i; j <= MAX; j += i + i)
                prime[j] = false;
}
bool digitPrime(int n){
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    return prime[sum];
}
void preSum(){
    for(int i = 2; i <= MAX; i++)
        if(prime[i] && digitPrime(i))
            pref[i] = 1;

    for(int i = 1; i <= MAX; i++)
        pref[i] += pref[i-1];
}

int main(){
    fast;
    sieve();
    preSum();
    int tc; cin >> tc;
    while(tc--){
        int l, r;
        cin >> l >> r;
        if(l == 1) cout << pref[r] << endl;
        else 
            cout << pref[r] - pref[l-1] << endl;
    }
    return 0;
}
