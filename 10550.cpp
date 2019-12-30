#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll a,b,c,d;
    while(cin >> a >> b >> c >> d){
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;

        ll ans = 1080;

        ans += (a > b? a - b: 40 - (b-a)) * 9;
        ans += (c > b? c - b: 40 - (b-c)) * 9;
        ans += (c > d? c - d: 40 - (d-c)) * 9;
        cout << ans << endl;


    }
}
