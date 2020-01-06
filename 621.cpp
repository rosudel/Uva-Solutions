using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        int len = s.size();
        if(s == "1" || s == "4" || s == "78")
            cout << "+\n";
        else if(s[len-1] == '5' && s[len-2] == '3')
            cout << "-\n";
        else if(s[0] == '9' && s[len-1] == '4')
            cout << "*\n";
        else
            cout << "?\n";
    }
}
