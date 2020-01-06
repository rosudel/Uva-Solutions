using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
typedef long long ll;

int main(){
    int t; cin >> t; 
    ll sum = 0;
    getchar();
    while(t--){
        string s;
        getline(cin , s);
        string command, number;

        istringstream iss(s);

        iss >> command;
        iss >> number;
        
        stringstream convert(number);

        ll num = 0;

        convert >> num;
        sum += num;

        if(command == "report")
            cout << sum << endl;
        
    }
}
