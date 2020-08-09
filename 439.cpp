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

int dr[] = {-2, -2, +2, +2, +1, -1, +1, -1};
int dc[] = {+1, -1, +1, -1, +2, +2, -2, -2};

int const M = 8;

int adj[M][M];

bool valid(int i, int j){
    return i >= 0 && i < 8 && j >= 0 && j < 8;
}

int bfs(int s, int ss, int d, int dd){
    memset(adj, 0, sizeof adj);
    int level[M][M];
    queue<pair<int,int>> q;
    q.push({s,ss});
    level[s][ss] = 0;
    adj[s][ss] = 1;
    while(!q.empty()){
        auto u = q.front(); q.pop();
        for(int i = 0; i < 8; i++){
            int nr = u.first+dr[i];
            int nc = u.second+dc[i];
            if(valid(nr, nc) && !adj[nr][nc]){
                adj[nr][nc] = 1;
                level[nr][nc] = level[u.first][u.second] + 1;
                q.push({nr,nc});
            }
        }
    }
    return level[d][dd];
}

int main(){
    string a, b; 
    while(cin >> a >> b){
        int s = a[0]-'a', ss = a[1]-'0'-1;
        int d = b[0]-'a', dd = b[1]-'0'-1;
        int dis = bfs(s, ss, d, dd);
        cout << "To get from " << a << " to " << b << " takes " << dis << " knight moves." << endl;
    }
}

