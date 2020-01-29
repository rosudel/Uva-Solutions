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

map < char , char > mp;
void update(){
    mp['A'] = 'A';
    mp['E'] = '3';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['J'] = 'L';
    mp['L'] = 'J';
    mp['M'] = 'M';
    mp['S'] = '2';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['W'] = 'W';
    mp['X'] = 'X';
    mp['Y'] = 'Y';
    mp['Z'] = '5';
    mp['1'] = '1';
    mp['2'] = 'S';
    mp['3'] = 'E';
    mp['5'] = 'Z';
    mp['8'] = '8';
}


bool isPalindrome(string s){
    bool ok = true;
    for(int i = 0, j = s.size()-1; i < s.size()/2; i++, j--){
        if(s[i] != s[j]){
            ok = false;
            break;
        }
    }
    return ok;
}

bool isMirror(string s){
    bool mirror = true;
    for(int i = 0, j = s.size()-1; i < s.size()/2; i++, j--){
        if(s[i] == '0' || s[i] == 'O' && 
           s[j] == '0' || s[j] == 'O')
            continue;
        if(mp[s[i]] != s[j]){
            mirror = false;
            break;
        }
    }
    if(s.size() & 1){
        int mid = s.size()/2;
        if(s[mid] == 'O' || s[mid] == '0') return mirror;
        if(mp[s[mid]] != s[mid])
            mirror = false;
    }
    return mirror;
}


int main(){
    update();

    string s;
    while(cin >> s){
        if(isPalindrome(s)){
            if(isMirror(s))
                cout << s << " -- is a mirrored palindrome.\n" << endl;
            else
                cout << s << " -- is a regular palindrome.\n" << endl;
        }
        else{
            if(isMirror(s))
                cout << s << " -- is a mirrored string.\n" << endl;
            else
                cout << s << " -- is not a palindrome.\n" << endl;

        }
    }
}
