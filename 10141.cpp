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
ll const INF = 1e18;


int main(){
    /* freopen("input", "r", stdin); */
    /* freopen("output", "w", stdout); */

    int n, m, counter = 1;
    while(cin >> n >> m){
        if( n == 0 && m == 0 ) break;
        for(int i = 0; i < n; i++){
            string x; 
            cin.ignore();
            getline(cin, x);
        }

        double price = 2000000000;
        int req = -1;
        string name, nm;

        while(m--){
            getline(cin, nm);
            double p;int r;
            cin >> p >> r;
            if( r > req ){
                name = nm;
                price = p;
                req = r;
            }
            else if( r == req && p < price ){
                name = nm;
                price = p;
                req = r;
            }
            cin.ignore();
            for(int i = 0; i < r; i++) {
                string str;
                getline(cin, str);
            }
        }
        if(counter > 1)  cout << endl;
        cout << "RFP #"<< counter << endl;
        cout << name << endl;
        counter++;
    }

}

