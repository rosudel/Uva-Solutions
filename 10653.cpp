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

int dr[] = {0, 0, -1, +1, -1, -1, +1, +1};
int dc[] = {-1, +1, 0, 0, -1, +1, -1, +1};

int const M = 1005;
int adj[M][M];

bool valid(int r, int c, int i, int j){
    return i < r && i >= 0 && j < c && j >= 0;
}

int bfs(int s, int ss, int d, int dd, int r, int c){
    int level[M][M];
    queue<pair<int,int>> q;
    q.push({s,ss});
    adj[s][ss] = 1;
    level[s][ss] = 0;
    while(!q.empty()){
        auto u = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int nr = u.first+dr[i];
            int nc = u.second+dc[i];
            if(valid(r, c, nr, nc) && !adj[nr][nc]){
                adj[nr][nc] = 1;
                level[nr][nc] = level[u.first][u.second]+1;
                q.push({nr,nc});
            }
        }
    }
    return level[d][dd];
}

int main(){
    int R,C; 
    while(cin >> R >> C){
        memset(adj, 0, sizeof adj);
        if(!R && !C) break;
        int b; cin >> b;
        while(b--){
            int r, n; cin >> r >> n;
            while(n--){
                int c; cin >> c;
                adj[r][c] = 1;
            }
        }
        int s, ss, d, dd;
        cin >> s >> ss >> d >> dd;
        int ans = bfs(s, ss, d, dd, R, C);
        cout << ans << endl;
    }
}
