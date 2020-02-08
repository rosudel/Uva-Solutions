#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define endl '\n'
#define all(var) var.begin(), var.end()
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b){
    while(a){
        b %= a;
        swap(a,b);
    }
    return b;
}
int main(){
    int n;
    while(cin >> n && n != 0){
        ll sum = 0;
        for(int i = 1; i < n; i++)
            for(int j = i+1; j <= n; j++)
                sum += gcd(i,j);
        cout << sum << endl;
    }
}
