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

int main(){
    int tc; cin >> tc;
    while(tc--){
        cin.ignore();
        string s;
        cin >> s;
        sort(all(s));
        do{
            cout << s << endl;
        }while(next_permutation(all(s)));
        cout << endl;
    }
    return 0;
}
