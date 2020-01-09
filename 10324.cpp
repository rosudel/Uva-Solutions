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
    string str;
    int c = 1;
    while(cin >> str){
        int f; cin >> f;
        printf("Case %d:\n", c);
        while(f--){
            int i,j;
            cin >> i >> j;
            bool ok = true;
            for(int k = min(i,j); k < max(i,j); k++)
                if(str[k] != str[k+1]){
                    ok = false;
                    break;
                }
            if(ok)
                printf("Yes\n");
            else
                printf("No\n");
        }
        c++;
    }
}