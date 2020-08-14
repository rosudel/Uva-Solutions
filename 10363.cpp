#include <bits/stdc++.h>
#define endl '\n'
#define uset unordered_set
#define umap unordered_map
#define all(var) var.begin(), var.end()
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define Fast ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
typedef long long ll;
using namespace std;

bool checkWin(string s){
    bool exist = false;
    // row
    for(int i = 0; i < 9; i+=3){
        if(s[i] != '.' && s[i] == s[i+1] && s[i] == s[i+2])
            { exist = true; break; }
    }
    // col 
    for(int i = 0; i < 3; i++){
        if(s[i] != '.' && s[i] == s[i+3] && s[i] == s[i+6])
            { exist = true; break; }
    }
    // diagonal
    if(( s[0] != '.' && s[0] == s[4] && s[0] == s[8]) || 
          (s[2] != '.' && s[2] == s[4] && s[2] == s[6]))
        exist = true;
    return exist;
}

int main(){
    Fast;
    int t; cin >> t;
    while(t--){
        string s = "";
        for(int i = 0; i < 3; i++){
            string a; cin >> a;
            s += a;
        }
        string start = ".........";

        queue<pair<string, bool>> q;
        q.push({start, true});
        bool yes = false;
        // bfs game tree
        while(!q.empty()){
            string board = q.front().first;
            bool turn = q.front().second; q.pop();
            if(board == s){
                yes = true;
                break;
            }
            if(checkWin(board)) continue;
            char rep = turn ? 'X' : 'O';
            for(int i = 0; i < 9; i++){
                if(board[i] == '.'){
                    board[i] = rep;
                    if(board[i] == s[i])
                        q.push({board, turn ? 0 : 1});
                    board[i] = '.';
                }
            }
        }
        cout << (yes ? "yes" : "no") << endl;
    }
}
