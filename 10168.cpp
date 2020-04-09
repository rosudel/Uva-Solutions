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
int M = 1e7+7;
vector<bool> prime(M, true);

void sieve(){
    prime[0] = prime[1] = false;
    for(int i = 2; i <= sqrt(M); i++){
        if(prime[i])
            for(int j = i*i; j <= M; j += i)
                prime[j] = false;
    }
}
pair<int,int> even(int N){
    int cp = N;
    while(N--){
        if( prime[N] && prime[cp-N] )
            return {cp-N, N};
    }
    return {0,0};
}
int main(){
    sieve();
    int N;
    while(cin >> N){
        if( N < 8 ) cout << "Impossible." << endl;
        else{
            if( N%2 == 0 ){
                auto p = even(N-4);
                cout << "2 2 " << p.first <<  ' ' << p.second <<endl;
            }
            else{
                auto p = even(N-5);
                cout << "2 3 " << p.first <<  ' ' << p.second <<endl;
            }
        }
    }
}
