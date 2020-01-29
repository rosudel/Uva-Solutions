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

bool isPalindrome(string s){
    int itr = s.size() & 1 ? s.size()/2 + 1: s.size()/2;
    bool ret = true;
    for(int i = 0, j = s.size()-1; i < itr; i++, j--){
        if(s[i] != s[j]){
            ret = false;
            break;
        }
    }
    return ret;
}

int main(){
    string s;
    while(getline(cin, s)){
        if(s == "DONE") break;
        string ans = "";
        for(int i = 0; i < s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z')
                ans.push_back(s[i]);
            else if(s[i] >= 'A' && s[i] <= 'Z')
                ans.push_back(tolower(s[i]));
        }
        if(isPalindrome(ans))
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
    }
}
