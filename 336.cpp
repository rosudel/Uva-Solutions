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

const int M = 100000;
vector<vector<int>> adj;

int bfs(int depth, int source){
    int level[M];
    bool used[M] = {};
    queue<int> q;
    q.push(source);
    used[source] = 1;
    level[source] = 0;
    int cnt = 1;
    while(!q.empty()){
        int u = q.front(); q.pop();
        if(level[u] == depth) break;
        for(int v: adj[u]){
            if(!used[v]){
                used[v] = 1;
                level[v] = level[u]+1;
                cnt++;
                q.push(v);
            }
        }
    }
    return cnt;
}

int main(){
    Fast;
    int n; 
    int tc = 0;
    while(cin >> n, n){
        adj.clear();
        adj.resize(M);
        uset<int> nodeCounter;
        for(int i = 0; i < n; i++){
            int u, v; cin >> u >> v;
            nodeCounter.insert(u);
            nodeCounter.insert(v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        while(true){
            int source, depth; cin >> source >> depth;
            if(!source && !depth) break;
            int ans = (int)nodeCounter.size()-bfs(depth, source);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++tc, ans, source, depth);
        }
    }
}

