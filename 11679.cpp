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
    int bank,deb;
    while(cin >> bank >> deb){
        if(bank == 0 && deb == 0)
            break;
        int arr[bank+1];
        
        for(int i = 1; i <= bank; i++)
            cin >> arr[i];

        bool ok = true;
        while(deb--){
            int d,c,val;
            cin >> d >> c >> val;
            arr[d] -= val;
            arr[c] += val;
        }
        for(int i = 1; i <= bank; i++){
            if(arr[i] < 0){
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "S\n";
        else
            cout << "N\n";
    }
}
