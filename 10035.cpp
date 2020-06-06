#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#define endl '\n'
#define uset unordered_set
#define umap unordered_map
#define all(var) var.begin(), var.end()
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define Fast ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
typedef long long ll;
using namespace std;

int main(){
    string a,b;
    while(cin >> a >> b){
        if(a == "0" && b == "0")
            break;

        int lena,lenb;
        if((int)a.size() < (int)b.size()) swap(a,b);
        lena = a.size();
        lenb = b.size();

        int cnt = 0;
        bool carry = false;
        for(int i = lenb-1, j = lena-1; i >= 0; i--,j--){
            if(a[j]-'0'+b[i]-'0'+carry > 9)
                carry = true, cnt++;
            else carry = false;
        }
        for(int i = lena-lenb-1; i >= 0; i--){
            if(a[i]-'0'+carry > 9)
                carry = true, cnt++;
            else break;
        }
        if(!cnt) cout << "No carry operation." << endl;
        else if(cnt == 1) cout << "1 carry operation." << endl;
        else cout << cnt << " carry operations." << endl;
    }
}


