#include <iostream>
#include <iomanip>
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

struct output{
    void display(int divident, int divisor, bool neg){
        if(neg){
            int f = log10(divisor)+1;
            string bar(f,'-');
            cout << "  " << setfill(' ') << setw(f) << divident << endl;
            cout << "- " << bar << endl;
            cout << "  " << divisor << endl;
        }
        else{
            int f = log10(divisor)+1;
            string bar(f,'-');
            cout << setfill(' ') << setw(f) << divident << endl;
            cout << bar << endl;
            cout << divisor << endl;
        }
    }
    void display(int left, int div, int rem, bool neg){
        if(neg){
            int f = log10(left)+1;
            f += log10(div)+1;
            string spc((int)log10(left)+1, ' ');
            string bar((int)log10(div)+1, '-');
            cout << "  " << setfill(' ') << setw(f) << rem << endl;
            cout << "- " << left << bar << endl;
            cout << "  " << spc << div << endl;
        }
        else{
            int f = log10(left)+1;
            f += log10(div)+1;
            string spc((int)log10(left)+1, ' ');
            string bar((int)log10(div)+1, '-');
            cout << setfill(' ') << setw(f) << rem << endl;
            cout << left << bar << endl;
            cout << spc << div << endl;
        }
    }
};
 
int main(){
    int n;
    int i = 1;
    while(cin >> n && n != 0){
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            sum += x;
        }
        double d = (double)sum/(double)n;
        sum = abs(sum), n = abs(n);
        int g = __gcd(sum, n);
        struct output out;
        printf("Case %d:\n", i);

        if (!sum) cout << 0 << endl;
        else if( d > 0.0 && sum%n == 0 ) 
            cout << sum/n << endl;
        else if( d < 0.0 && sum%n == 0 ) 
            cout << "- " << sum/n << endl;
        else if( d > 0.0 && d < 1.0 ) 
            out.display(sum/g, n/g, false);
        else if( d > 1.0 ) 
            out.display(sum/n, n/g, (sum%n)/g, false);
        else if( d < 0.0 && d > -1.0 ) 
            out.display(sum/g, n/g, true);
        else
            out.display(sum/n, n/g, (sum%n)/g, true);
        i++;
    }
}
