using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
typedef long long ll;

bool sortbysecdesc(const pair<string, int>&a, const  pair<string, int>&b){
    return (a.second > b.second);
}

int main(){
    int tc; cin >> tc;
    for(int i = 1; i <= tc; i++){
        vector < pair < string, int > > v(10);
        
        for(int j = 0; j < 10; j++){
            cin >> v[j].first >> v[j].second;

        }

        sort(v.begin(), v.end(), sortbysecdesc);

        int index = 0;

        printf("Case #%d:\n", i);

        cout << v[index].first << endl;
        while(v[index].second == v[index+1].second){
            index++;
            cout << v[index].first << endl;
        }

    }
}
