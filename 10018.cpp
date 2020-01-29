#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
typedef long long ll;
using namespace std;
#define endl '\n'

ll reverse(ll num){
    ll rem = 0;
    while( num != 0 ){
        rem = rem*10+ num % 10;
        num /= 10;
    }
    return rem;
}
bool isPalindrome(ll num){
    if(reverse(num) == num)
        return true;
    return false;
}

int main(){
    ll tc; cin >> tc;
    while(tc--){
        ll num; cin >> num;
        ll i = 0;
        ll init = num;
        ll sum;

        do{
            sum = init + reverse(init);
            init = sum;
            i++;
        }while(!isPalindrome(sum));
        cout << i << ' ' << init << endl;
    }
}

