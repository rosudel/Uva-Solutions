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
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string line;
        getline(cin , line);
        int mm = 0, ff = 0;
        istringstream iss(line);
        vector < string > v;
        string dummy;
        while(iss >> dummy)
            v.push_back(dummy);
        for(int i = 0; i < v.size(); i++){
            if(v[i] == "MM")
                mm++;
            else if(v[i] == "FF")
                ff++;
        }
        if(v.size() == 1)
            cout << "NO LOOP\n";
        else if(mm == ff)
            cout << "LOOP\n";
        else 
            cout << "NO LOOP\n";
    }
}