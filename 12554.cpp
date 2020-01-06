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
    int p; cin >> p;

       
    vector < string > names(p);
    vector < string > song{"Happy" , "birthday", "to", "you"};

    int loop = p % 16 == 0 ? p/16 : (p/16) + 1;

    for(int i = 0; i < p; i++)
        cin >> names[i];

    int i = 0, j = 0, k = 0;
    
    while(i < loop*16){
        if((i+5) % 16 == 0){
            cout << names[j%p] << ": Rujia\n";
        }
        else{
            cout << names[j%p] << ": " << song[k%4] << '\n';
        }
        i++; j++; k++;
    }
    
}
