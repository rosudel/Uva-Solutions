using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
typedef long long ll;

int main(){
    int tc; 
    cin >> tc;
    while(tc--){
        int a,b;
        scanf("%d%d", &a, &b);

        ll ans = (a/3)*(b/3);

        printf("%d\n",ans);
    }
}
