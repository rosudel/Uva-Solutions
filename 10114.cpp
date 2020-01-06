using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
typedef long long ll;
#include <algorithm>

int main(){
    double dp, lm;
    int dc, m;
    while(cin >> m >> dp >> lm >> dc){
        if(m < 0) break;
        double owe = lm;
        double arr[m+1] = {0};

        for(int i = 0; i < dc; i++){
            int a; cin >> a;
            cin >> arr[a];
        }
        double currPrice = lm + dp;
        double inst = lm / m;
        currPrice -= currPrice * arr[0];

        int i = 1;
        while(owe > currPrice){
            if(arr[i] == 0.0){
                double var = 0.0;
                int j = i;
                // while(var = arr[j--] == 0);
                while(var == 0){
                    var = arr[j--];
                }
                currPrice -= currPrice * var;
            }else{
                currPrice -= currPrice * arr[i];
            }
            owe -= inst;
            i++;
        }
        if(i == 2) cout << "1 month\n";
        else 
            cout << i-1 << " months\n"; 

    }
}
