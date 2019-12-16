#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector < int > v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int q; cin >> q;

    while(q--){
        int x;cin >> x;
        vector < int >:: iterator lower = lower_bound(v.begin(), v.end(), x);
        vector < int >:: iterator upper = upper_bound(v.begin(), v.end(), x);

        int low, up;
        low = *(--lower);
        up = *upper;

        if(upper == v.end())
            cout << low << " X\n";
        else if(low == 0)
            cout << "X " << up << endl;
        else
            cout << low << ' ' << up << endl;
            
    }

}
