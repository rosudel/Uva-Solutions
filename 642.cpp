#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
typedef long long ll;
using namespace std;
#define endl '\n'
#define all(var) var.begin(), var.end()

set < string > dict;

void updatedict(){
    string s;
    while(cin >> s)
        if(s == "XXXXXX")
            return;
        else
            dict.emplace(s);
}

bool isAnagram(string s1, string s2){
    sort(all(s1)); sort(all(s2));
    if(s1 == s2) return true;
    return false;
}

int main(){
    updatedict();
    string s;
    while(cin >> s){
        if(s == "XXXXXX")
            break;
        bool printed = false;
        for(auto x: dict){
            if(isAnagram(x, s)){
                printed = true;
                cout << x << endl;
            }
        }
        if(!printed)
            cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }
}
