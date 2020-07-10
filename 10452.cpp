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

int dr[] = {-1, 0, 0};
int dc[] = {0, 1, -1};

bool valid(int r, int c, int n, int m){
    return r < n && r >= 0 && c < m && c >= 0;
}

int main(){
    Fast;
    int tcase;
    cin >> tcase;
    while(tcase--){
        int n, m;
        cin >> n >> m;
        pair<int,int> pos;
        string s = "IEHOVA#";
        char arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
                if(arr[i][j] == '@')
                    pos = {i, j};
            }
        }
        vector<string> ans;
        for(char ch: s){
            for(int i = 0; i < 3; i++){
                int r = pos.first+dr[i];
                int c = pos.second+dc[i];
                if(valid(r,c,n,m) && arr[r][c] == ch){
                    if(r < pos.first)
                        ans.push_back("forth");
                    else if(c > pos.second)
                        ans.push_back("right");
                    else ans.push_back("left");
                    pos.first = r;
                    pos.second = c;
                    break;
                }
            }
        }
        cout << ans[0];
        for(int i = 1;i < (int)ans.size(); i++)
            cout << ' ' << ans[i];
        cout << endl;
    }
}

