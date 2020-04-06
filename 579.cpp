#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m;
    while(scanf("%d:%d", &h, &m) == 2){
        if(h == 0 && m == 0) break;
        double angle = 30LL*(double)h - (5.5L*m);
        angle = angle < 0 ? -angle : angle;
        double ans = min ( angle , 360LL - angle );
        cout << setprecision(3) << fixed << ans << endl;
    }
}
