#include <cmath>
#include <set>
#include <queue>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
/* #include <boost/algorithm/string.hpp> */
using namespace std;
typedef long long ll;
#define endl '\n'
#define all(var) var.begin(), var.end()

bool comparator(char a, char b){
    if(tolower(a) ==  tolower(b))
        return a < b;

    return tolower(a) < tolower(b);
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;

        sort(all(s), comparator);

        do{
            cout << s << endl;
        }while(next_permutation(all(s), comparator));
    }

    return 0;
}

