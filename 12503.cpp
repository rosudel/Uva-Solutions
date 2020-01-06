using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
typedef long long ll;
int pos;


void solve(string s, vector<string>v){
    if(s == "RIGHT")
        pos++;
    else if(s == "LEFT")
        pos--;
    else{
        istringstream iss(s);
        while(iss >> s);
        stringstream ss(s);
        int index;
        ss >> index;
        solve(v[index], v);
    }

}



int main(){
    int tc; cin >> tc;

    while(tc--){
        int ins; cin >> ins;
        cin.ignore();
        vector < string > v(ins+1);
        pos = 0;

        for(int i = 1; i <= ins; i++){
            getline(cin, v[i]);
        }

        for(int i = 1; i <= ins; i++){
            solve(v[i], v);
        }
        cout << pos << endl;
    }

}
