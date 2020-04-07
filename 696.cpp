#include <iostream>
using namespace std;

int knight(int m, int n){
    if( m == 1 || n == 1 || m == 0 || n == 0) 
        return m*n;
    else if( m == 2 || n == 2 ){
        int mx = max(m,n);
        int d = mx/4;
        if( mx%4 == 0 ) return d*4;
        else if( mx%4 == 1 ) return d*4+2;
        else return d*4+4;
    }
    return (m*n+1)/2;
}
int main(){
    int m, n;
    while(cin >> m >> n){
        if( m == 0 && n == 0 ) break;
        cout << knight(m,n) << " knights may be placed on a " << m << " row " << n << " column board." << endl;
    }
}

