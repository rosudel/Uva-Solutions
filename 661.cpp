using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
typedef long long ll;
#include <algorithm>

int main(){
    int n,m,c;
    int seq = 1;
    while(cin >> n >> m >> c){
        if(n == 0 && m == 0 && c == 0) break;

        vector < pair < int , bool > > v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = false;
        }
        int cap,maxima ;
        cap = maxima = 0;

        int arr[m];
        for(int i = 0; i < m; i++)
            cin >> arr[i];

        for(int i = 0; i < m; i++){
            if(!v[arr[i]-1].second){
                v[arr[i]-1].second = true;
                cap += v[arr[i]-1].first;
                maxima = max(cap, maxima);
            }
            else
            {
                v[arr[i]-1].second = false;
                cap -= v[arr[i]-1].first;
            }
            if(maxima > c) break;
        }



        if(maxima > c){
            printf("Sequence %d\nFuse was blown.\n\n", seq);
        }
        else
        {
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n", seq, maxima);
        }
        seq++;
    }
}