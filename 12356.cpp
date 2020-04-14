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
#define all(var) var.begin(), var.end()
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;
 
int main(){
    int left[1000006],right[1000006];
    int s, b;

    while(cin >> s >> b,  s || b){
        for(int i = 1; i <= s; i++)
            left[i] = i-1, right[i] = i+1;
        while(b--){
            int l,r;
            cin >> l >> r;
            if( left[l] < 1 ) cout << "* ";
            else cout << left[l] << " ";
            if(right[r] > s) cout << '*' << endl;
            else cout << right[r] << endl;
            left[right[r]] = left[l];
            right[left[l]] = right[r];
        }
        cout << '-' <<endl;
    }
}
