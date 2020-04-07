#include <iostream>
using namespace std;

int rook(int m, int n){
    return min(m,n);
}
int king(int m, int n){
    m = m/2+m%2;
    n = n/2+n%2;
    return m*n;
}
int queen(int m, int n){
    return min(m,n);
}
int knight(int m, int n){
    if( m == 1 || n == 1 ) 
        return max(m,n);
    else if( m == 2 || n == 2 ){
        int mx = max(m,n);
        if( mx % 4 == 0 ) return (mx/4)*4;
        else if( mx%4 == 1 ) return (mx/4)*4+2;
        return (mx/4)*4+4;
    }
    else return (m*n+1)/2;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        char ch;
        int m,n;
        cin >> ch >> m >> n;
        if( ch == 'r' ) cout << rook(m,n) << endl;
        else if( ch == 'k' ) cout << knight(m,n) <<endl;
        else if( ch == 'K' ) cout << king(m,n) << endl;
        else cout << queen(m,n) << endl;
    }
}
