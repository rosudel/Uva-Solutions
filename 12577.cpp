using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
typedef long long ll;

int main(){
    for(int i = 1; ; i++){
        string s; cin >> s;
        if(s == "*")
            break;
        if(s == "Hajj")
            cout << "Case "<<i<<": Hajj-e-Akbar\n";
        else
            cout << "Case "<<i<<": Hajj-e-Asghar\n";
    }
}

//done
