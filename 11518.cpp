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

void dfs(vector<vector<int>> & adj, vector<bool>& visited, int node){
    visited[node] = 1;
    for(int i: adj[node])
        if(!visited[i])
            dfs(adj, visited, i);
}

int main(){
    Fast;
    int tcase; 
    cin >> tcase;
    while(tcase--){
        int nodes, edges, start;
        cin >> nodes >> edges >> start;
        vector<vector<int>> adj;
        adj.resize(nodes+1);
        for(int i = 0; i < edges; i++){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector<bool> visited;
        visited.resize(nodes+1);
        for(int i = 0; i < start; i++){
            int s; cin >> s;
            dfs(adj, visited, s);
        }
        int ans = 0;
        for(int i = 1; i <= nodes; i++)
            if(visited[i]) ans++;
        cout << ans << endl;
    }
}

