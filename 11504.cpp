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

void dfs(vector<vector<int>>& adj, vector<bool> & visited, stack<int> *stk, int node){
    visited[node] = 1;
    for(int i: adj[node])
        if(!visited[i])
            dfs(adj, visited, stk, i);
    if(stk != NULL) stk->push(node);
}

int main(){
    int tcase; cin >> tcase;
    while(tcase--){
        int nodes, edges;
        cin >> nodes >> edges;
        vector<vector<int>> adj;
        vector<bool> visited;

        adj.resize(nodes+1);
        visited.resize(nodes+1);
        for(int i = 0; i < edges; i++){
            int s, d;
            cin >> s >> d;
            adj[s].push_back(d);
        }
        stack<int> order;
        for(int i = 1; i <= nodes; i++){
            if(!visited[i])
                dfs(adj, visited, &order, i);
        }
        int ans = 0;

        for(int i = 1; i <= nodes; i++)
            visited[i] = 0;

        while(!order.empty()){
            int node = order.top();
            order.pop();
            if(!visited[node]){
                ans++;
                dfs(adj, visited, NULL, node);
            }
        }
        cout << ans << endl;
    }
}

