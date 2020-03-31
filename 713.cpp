#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define endl '\n'
#define all(var) var.begin(), var.end()
typedef long long ll;
using namespace std;

string added;

bool compute(char a, char b, bool carry){
    int f = a - '0';
    int s = b - '0';
    int sum = f+s;
    if(carry) {sum++; carry = false;};
    if(sum > 9) carry = true;
    added.push_back((sum%10)+'0');
    return carry;
}

string stradd(string s1, string s2){
    added.clear();
    string big,small;
    if(s1.size() > s2.size()){ big = s1; small = s2; }
    else{ big = s2; small = s1; }

    int diff = big.size() - small.size();

    if(diff != 0){
        string zero = "";
        for(int i = 0; i < diff; i++)
            zero += '0';
        small.insert(0,zero);
    }

    bool carry = false;
    for(int i = small.size()-1; i >= 0; i--){
        carry = compute(small[i], big[i], carry);
    }
    if(carry) added.push_back('1');
    reverse(all(added));
    return added;
}


int main(){
    int tc; cin >> tc;
    while(tc--){
        string s1, s2;
        cin >> s1 >> s2;
        reverse(all(s1));
        reverse(all(s2));
        string add = stradd(s1,s2);
        reverse(all(add));
        while(add[0] == '0')
            add.erase(add.begin());
        cout << add << endl;
    }
}
