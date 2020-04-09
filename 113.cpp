#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long double a,b;
    while(cin >> a >> b){
        printf("%.0llf\n", pow(b, 1LL/a));
    }
}
