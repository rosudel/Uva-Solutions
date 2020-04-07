#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(var) var.begin(), var.end()
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;

bool anagram(string s, string t){
    multiset < char > st, tt;
    for(auto ch : s) if(ch != ' ') st.insert(ch);
    for(auto ch : t) if(ch != ' ') tt.insert(ch);
    return  st == tt;
}
 
int main(){
    int tc; cin >> tc; 
    getchar();
    cin.ignore();
    for(int t = 0; t < tc; t++){
        if(t) cout << endl;
        vector<string > List;
        string s; 
        while(getline(cin, s) && s != "")
            List.push_back(s);

        sort(all(List));
        multimap < string , string > mp;

        for(int i = 0; i < List.size(); i++){
            for(int j = i+1; j < List.size(); j++){
                if( anagram(List[i], List[j]) )
                    mp.insert({List[i], List[j]});
            }
        }
        for(auto itr: mp)
            cout << itr.first << " = " << itr.second << endl;
    }
}
