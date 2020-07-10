#include <bits/stdc++.h>
#define endl '\n'
#define uset unordered_set
#define umap unordered_map
#define all(var) var.begin(), var.end()
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define Fast ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void dfs(vector<vector<int>>& adj, vector<bool>& visited, int node){
    for(int i: adj[node]){
        if(!visited[i]){
            visited[i] = 1;
            dfs(adj, visited, i);
        }
    }
}

int main(){
    Fast;
    int nodes;
    while(cin >> nodes, nodes){
        vector<vector<int>> adj;
        adj.resize(nodes+1);
        int in;
        while(cin >> in , in){
            int des;
            while(cin >> des , des){
                adj[in].push_back(des);
            }
        }
        int start;
        cin >> start;
        for(int i = 0; i < start; i++){
            int u; cin >> u;
            vector<bool> visited;
            visited.resize(nodes+1);

            dfs(adj, visited, u);

            vector<int> out;

            for(int i = 1; i <= nodes; i++)
                if(!visited[i])
                    out.push_back(i);

            cout << out.size();
            for(int i: out) cout <<  ' ' << i;
            cout << endl;
        }

    }
}
