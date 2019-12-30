using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>

int main(){
    int q;
    while(cin >> q && q != 0){
        int x,y; cin >> x >> y;
        vector < pair < int , int > > v(q);
        
        for(int i = 0; i < q; i++){
            cin >> v[i].first >> v[i].second;
            if(v[i].first  == x || v[i].second == y )
                cout << "divisa\n";
            else if(v[i].first > x && v[i].second > y)
                cout << "NE\n";
            else if(v[i].first > x && v[i].second < y)
                cout << "SE\n";
            else if(v[i].first < x && v[i].second > y)
                cout << "NO\n";
            else 
                cout << "SO\n";
        }
        

    }
}
