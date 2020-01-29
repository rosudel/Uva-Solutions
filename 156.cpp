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

bool isAnagram(string s1, string s2){
    for_each(s1.begin(), s1.end(), [](char & c){
            c = tolower(c);
        });
    for_each(s2.begin(), s2.end(), [](char & c){
            c = tolower(c);
        });
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2) return true;
    else return false;
}

int main(){
    string line;
    vector < string > word;
    set < string > ans;
    while(getline(cin, line)){
        if(line == "#")
            break;
        istringstream iss(line);
        string w;

        while(iss >> w)
            word.push_back(w);
    }
    
    for(int i = 0; i < word.size(); i++){
        int occur = 0;

        for(int j = 0; j < word.size(); j++){
            if(j == i) continue;
            if(isAnagram(word[i],word[j]))
                occur++;
        }
        if(occur == 0) ans.insert(word[i]);
    }

    for(auto x: ans)
        cout << x << endl;

}
