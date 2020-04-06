#include <iostream>
using namespace std;
typedef long long ll;

int leap(ll year){
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
        return 1;
    return 0;
}
ll M(ll n, ll year){
    if( n == 0 ) return 0;
    if( n == 4 || n == 6 || n == 9 || n == 11 ) return 30;
    if( n == 2 ) return 28+leap(year);
    return 31;
}
int main(){
    ll n, d, m, year;
    while(cin >> n >> d >> m >> year){
        if( n == 0 && d == 0 && m == 0 && year == 0 ) break;
        ll days = 0;
        for(ll i = 1; i < m; i++){
            days += M(i, year);
        }
        days += d + n;
        while(true){
            if(days - (365+leap(year)) < 1) break;
            days -= 365+leap(year);
            year++;
        }
        int month = 0;
        while(true){
            month++;
            if( days - M(month, year) < 1 ) break;
            days -= M(month, year);
        }
        cout << days << ' '<< month << ' '<< year << endl;
    }
}
