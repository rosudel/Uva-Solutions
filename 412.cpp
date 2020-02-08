#include <iostream>
#include <iomanip>
#include <cmath>
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

ll gcd(ll a, ll b){ while(a){ b %= a; swap(a,b); } return b;}

int main(){
    ll n;
    while(cin >> n && n != 0){
        vector < ll > v(n);
        for(auto &x: v)
            cin >> x;

        int pr = 0;
        for(int i = 0; i < v.size(); i++){
            for(int j = i+1; j < v.size(); j++)
                if(gcd(v[i] , v[j]) == 1)
                    pr++;
        }
        if(!pr)
            cout << "No estimate for this data set." << endl;
        else
        {
            double  pi = sqrt((double)((double)(n*(n-1)/2)/(double)pr)*(double)6);
            cout  << fixed << setprecision(6) << pi << endl;
        }
    }
    return 0;
}
