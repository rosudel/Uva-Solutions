#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    while(cin >> n){
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        ll line = 1+(n-1)/2;
        ll sum = line*line;
        auto N = [](ll p){
            return 2*p-1;
        };
        cout << N(sum)+N(sum-1)+N(sum-2)<< endl;
    }
}
