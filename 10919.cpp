#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
typedef long long ll;
using namespace std;

int main(){
    int taken, catg;
    while(cin >> taken >> catg){
        map < int , bool > sub;
        for(int i = 0; i < taken; i++){
            int n; cin >> n;
            sub.insert(make_pair(n, true));
        }
        bool ok = true;
        for(int i = 0; i < catg; i++){
            int n, must;
            cin >> n >> must;
            int check = 0;
            for(int j = 0; j < n; j++){
                int sub_num; cin >> sub_num;
                if(sub[sub_num])
                    check++;
            }
            if(check < must)
                ok = false;
        }
        if(ok)
            cout << "yes\n";
        else    
            cout << "no\n";
    }
}