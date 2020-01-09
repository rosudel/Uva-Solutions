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
    float height, up, down, fatigue;
    while(cin >> height >> up >> down >> fatigue){
        if(height == 0 && up == 0 && down == 0 && fatigue == 0)
            break;

        int day = 1;
        float climbed = 0;
        fatigue = up * (fatigue/100);

        while(true){
            climbed += up;
            if(up > 0) up -= fatigue;
            if(climbed > height)
                break;
            climbed -= down;
            if(climbed < 0)
                break;
            day++;
        }

        if(climbed < 0)
            cout << "failure on day " << day << endl;
        else
            cout << "success on day " << day << endl;
    }
}