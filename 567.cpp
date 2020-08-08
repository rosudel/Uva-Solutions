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

int const M = 25;

vector<vector<int>> adj;

int bfs(int s, int d){
    queue<int> q;
    int level[M];
    bool used[M] = {};
    used[s] = 1;
    q.push(s);
    level[s] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v: adj[u]){
            if(!used[v]){
                used[v] = 1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
    }
    return level[d];
}

int main(){
    int n; 
    int tc = 0;
    while(cin >> n){
        adj.clear();
        adj.resize(M);
        for(int i = 0; i < n; i++){
            int v; cin >> v;
            adj[1].push_back(v);
            adj[v].push_back(1);
        }
        for(int i = 2; i <= 19; i++){
            cin >> n;
            while(n--){
                int v; cin >> v;
                adj[i].push_back(v);
                adj[v].push_back(i);
            }
        }
        cout << "Test Set #" << ++tc << endl;
        int q; cin >> q;
        while(q--){
            int s, d; cin >> s >> d;
            int ans = bfs(s, d);
            printf("%2d to %2d: %d\n", s, d, ans);
        }
        cout << endl;
    }
}

