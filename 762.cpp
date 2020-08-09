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

umap<string,vector<string>> adj;
umap<string,bool> visited;
umap<string,string> parent;

void bfs(string s, string d){
    queue<string> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        string u = q.front(); q.pop();
        for(auto v: adj[u]){
            if(!visited[v]){
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

int main(){
    input, output;
    int n; 
    int tc = 0;
    while(cin >> n){
        if(tc) cout << endl;
        tc++;
        adj.clear(), visited.clear();
        for(int i = 0; i < n; i++){
            string u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string s, d; cin >> s >> d;
        bfs(s, d);
        
        if(!visited[d])
            cout << "No route" << endl;
        else {
            vector<pair<string,string>> out;
            while(d != s){
                out.push_back({parent[d], d});
                d = parent[d];
            }
            reverse(all(out));
            for(auto it: out){
                cout << it.first << ' ' << it.second << endl;
            }
            parent.clear();
        }
    }
}

