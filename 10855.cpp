#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
#define endl '\n'
#define all(var) var.begin(), var.end()
#define input freopen("input", "r", stdin)
#define output freopen("output", "w", stdout)
#define Fast ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define vi vector<int>
int const MOD = 1e9+7;
typedef long long ll;
using namespace std;

bool check( char **a, char **b, int m ){
    bool ret = true;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            if( a[i][j] != b[i][j] ){
                ret = false;
                break;
            }
    return ret;
}

int main(){
    int n, m;
    while(cin >> n >> m, n || m){
        char** full = new char*[n];
        char** need = new char*[m];
        char** r90 = new char*[m];
        char** r180 = new char*[m];
        char** r270 = new char*[m];
        for(int i = 0; i < m; i++){
            need[i] = new char[m];
            r90[i] = new char[m];
            r180[i] = new char[m];
            r270[i] = new char[m];
        }
        for(int i = 0; i < n; i++)
            full[i] = new char[n];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> full[i][j];

        for(int i = 0; i < m; i++)
            for(int j = 0; j < m; j++)
                cin >> need[i][j];

        for(int i = 0; i < m; i++)
            for(int j = m-1; j >= 0; j--)
                r90[j][i] = need[i][m-j-1];

        for(int i = 0; i < m; i++)
            for(int j = m-1; j >= 0; j--)
                r180[j][i] = r90[i][m-j-1];

        for(int i = 0; i < m; i++)
            for(int j = m-1; j >= 0; j--)
                r270[j][i] = r180[i][m-j-1];

            
        int same, one, two, three;
        same  = one = two = three = 0;
        for(int i = 0; i < n-m+1; i++){
            for(int j = 0; j < n-m+1; j++){

                char** temp = new char*[m];
                for(int f = 0; f < m; f++)
                    temp[f] = new char[m];

                for(int k = i, a = 0; a < m; k++, a++){
                    for(int l = j, b = 0; b < m; l++, b++){
                        temp[a][b] = full[k][l];
                    }
                }
                same += check(need, temp, m);
                one += check(r90, temp, m);
                two += check(r180, temp, m);
                three += check(r270, temp, m);
                
            }
        }
        printf("%d %d %d %d\n", same, three, two, one);
    }
}
