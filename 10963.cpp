#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


int main(){
    int t; cin >>t ;
    for(int c = 0; c < t; c++){
        if(c != 0) cout << endl;
        int col; cin >> col;
        vector < pair < int, int > > v(col);
        
        for(int i = 0; i < col; i++){
            cin >> v[i].first >> v[i].second;
        }
        bool flag = true;
        int diff = abs(v[0].first - v[0].second);

        for(int i = 1 ; i < col; i++){
            if(abs(v[i].first - v[i].second) != diff){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}

