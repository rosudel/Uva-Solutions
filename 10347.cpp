#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
    double a,b,c;
    while(cin >> a >> b >> c){
        double p = (a+b+c)/2;
        double area = (4.0/3.0) * sqrt(p*(p-a)*(p-b)*(p-c));
        if( area > 0.0 ) 
            printf("%.3lf\n", area);
        else cout << "-1.000" << endl;
    }
}
