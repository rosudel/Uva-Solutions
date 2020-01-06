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
    int n; 
    bool first = true;
    while(cin >> n){
        map < string, int > person;
        vector < string > names;
        for(int i = 0; i < n; i++){
            string name; cin >> name;
            names.push_back(name);
            person[name] = 0;
        }   
        while(n--){
            // take input all the names

            string who; int money,m;   
            cin >> who >> money >> m;  // who's money gonna calculate
            if(m == 0) continue;

            person[who] += -1 * money;  // set the money to negative value

            for(int j = 0; j < m; j++){   
                string name;
                cin >> name;
                person[name] += money/m;
            }
            person[who] += money%m;
        }
        if(!first)
            cout << '\n';
        first = false;
        for(auto s: names)
            cout << s << ' ' << person[s] << "\n";
    }
}