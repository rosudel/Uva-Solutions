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
    bool ok = true;
    for(int i = 0, j = s.size()-1; i < s.size()/2; i++, j--){
        if(s[i] != s[j]){
            ok = false;
            break;
        }
    }
    return ok;
}
int main(){
    string s;
    while(cin >> s){
        set < string > st;

        for(int i = 0; i < s.size(); i++){
            string sub = "";
            sub += s[i];
            st.insert(sub);
            
            for(int j = i+1; j < s.size(); j++){
                sub += s[j];
                if(isPalindrome(sub))
                    st.insert(sub);
            }
        }
        cout << "The string '" << s << "' contains " << st.size() << " palindromes." << endl;
    }
    return 0;
}
