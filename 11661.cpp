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
    int n;
    while(cin >> n && n != 0){
        string s; cin >> s;
        set < int > res;
        set < int > drug;
        bool isZ = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'Z'){
                isZ = true;
                break;
            }
            else if(s[i] == 'R')
                res.insert(i);
            else if(s[i] == 'D')
                drug.insert(i);
        }
        if(isZ){
            cout << 0 << endl;
            continue;
        }
        int minimum = 1000000;
        bool one = false;
        for(auto it = res.begin(); it != res.end(); it++){
            for(auto itr = drug.begin(); itr != drug.end(); itr++){
                int diff = abs(*it-*itr);
                if(diff == 1) {one = true; break;}
                minimum = min(minimum, diff);
            }
            if(one) break;
        }
        if(one)
            cout << 1 << endl;
        else 
            cout << minimum << endl;
    }
}