#include <vector>
#include <cmath>
#include <iostream>
typedef long long ll;
using namespace std;

vector<ll> pref(50001);
void gen(){
    pref[0] = 0;
    for(int i = 1; i < 50001; i++){
        pref[i] = pow(i,3);
        pref[i] += pref[i-1];
    }
}
 
int main(){
    gen();
    ll n;
    while(cin >> n){
        cout << pref[n] << endl;
    }
}
