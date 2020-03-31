#include <vector>
#include <iostream>
#include <queue>
using namespace std;
 
vector<vector<int>> adj;

int input(int e,int n){
    adj.clear();
    adj.resize(n);
    int t;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        t = a;
    }
    return t;
}

bool bfs(int n, int t){
    vector<int> color(n);
    queue<int> q;
    color[t] = 1;
    q.push(t);
    while(!q.empty()){
        int i = q.front(); q.pop();
        int c = color[i] == 1 ? 2 : 1;
        for(int itr: adj[i]){
            if(color[itr] == color[i]) 
                return false;
            if(color[itr] == 0){
                color[itr] = c;
                q.push(itr);
            }
        }
    }
    return true;
}


int main(){
    int n;
    while(cin >> n && n != 0){
        int e; cin >> e;
        int t = input(e, n);
        if(bfs(n, t)) cout << "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl;
    }
}
