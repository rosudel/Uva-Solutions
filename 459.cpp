#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> parent, sz;

void init(int n){
    for(int i = 1;i <= n; i++)
        parent[i] = i, sz[i] = 1;
}
int find_root(int u){
    if(parent[u] == u)
        return u;
    return parent[u] = find_root(parent[u]);
}
void merge_node(int u, int v){
    u = find_root(u);
    v = find_root(v);
    if( u != v ){
        if(sz[u] > sz[v])
            swap(u, v);
        parent[u] = v;
        sz[v] += sz[u];
    }
}
int main(){
    int tc; cin >> tc;
    for(int t = 0; t < tc; t++){
        if(t) cout << endl;
        char ch; cin >> ch;
        int N = ch-64;
        parent.resize(N+1), sz.resize(N+1);
        init(N);
        cin.ignore();
        string s;
        while(getline(cin, s)){
            if(s == "") break;
            int u = s[0]-64, v = s[1]-64;
            merge_node(u, v);
        }
        map < int , int > comp;
        for(int i = 1; i <= N; i++){
            comp[find_root(i)] = true;
        }
        cout << comp.size() << endl;
        parent.clear(), sz.clear();
    }
}
