#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <sstream>
#include <algorithm>
typedef long long ll;
using namespace std;

int digit(int number){
    if(number < 10)
        return number;
    int sum = 0;
    while(number > 0){
        sum += number % 10;
        number /= 10;
    }
    return digit(sum);
}

int main(){
    string s1,s2;
    while(getline(cin, s1) && getline(cin, s2)){
        int sum1,sum2;
        sum1 = sum2  = 0;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] >= 'a' && s1[i] <= 'z')
                sum1 += s1[i] - 96;
            else if(s1[i] >= 'A' && s1[i] <= 'Z')
                sum1 += s1[i] - 64;
        }
        for(int i = 0; i < s2.size(); i++){
            if(s2[i] >= 'a' && s2[i] <= 'z')
                sum2 += s2[i] - 96;
            else if(s2[i] >= 'A' && s2[i] <= 'Z')
                sum2 += s2[i] - 64;
        }
        double ratio1 = ((double)digit(sum1)/ (double)digit(sum2)) * 100;
        double ratio2 = ((double)digit(sum2)/ (double)digit(sum1)) * 100;

        printf("%.2lf %\n", min(ratio1,ratio2));
    }
}