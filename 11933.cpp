#include <iostream>
using namespace std;
 
int main(){
    int n;
    while(cin >> n, n){
        int a = 0,b = 0;
        bool flp = true;
        for(int i = 0; i < 32; i++){
            if(n & (1<<i)){
                if(flp){
                    a |= (1<<i);
                    flp =false;
                }
                else{
                    b |= (1<<i);
                    flp = true;
                }
            }
        }
        cout << a <<  ' ' << b << endl;
    }
}
