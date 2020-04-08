#include <vector>
#include <iostream>
using namespace std;

struct Page{
    int a,b,c,d;
};

int main(){
    int p;
    while(cin >> p && p != 0){
        int need = p%4 == 0 ? p/4: (p/4)+1;
        vector<Page> sheet(need+1);

        int i = 0, scount = 1; 
        for(i; i < need*2; i+=2){
            sheet[scount].a = i+1; 
            if( i+2 > p ) break;
            sheet[scount].b = i+2;
            scount++;
        } 
        scount--;
        for(i; i < need*4; i+=2){
            if( i+1 > p ) break;
            sheet[scount].c = i+1; 
            if( i+2 > p ) break;
            sheet[scount].d = i+2;
            scount--;
        }
        auto print = [](int a){
            if( a == 0 ) cout << "Blank";
            else cout << a;
        };
        cout << "Printing order for " << p << " pages:" << endl;
        for(i = 1; i <= need; i++){
            printf("Sheet %d, front: ", i);
            print(sheet[i].d), cout << ", ", print(sheet[i].a), cout << endl;
            if( !sheet[i].b && !sheet[i].c) break;
            printf("Sheet %d, back : ", i);
            print(sheet[i].b), cout << ", ", print(sheet[i].c), cout << endl;
        }
    }
}
