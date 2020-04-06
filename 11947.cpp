#include <iostream>
using namespace std;

string zodiac(int m, int d);


int leap(int year){
    if( year % 400 == 0 || (year%4==0 && year%100!=0) )
        return 1;
    return 0;
}
int M(int m, int year){
    if(m == 0) return 0;
    if(m == 2) return 28+leap(year);
    if( m == 4 || m == 6 || m == 9 || m == 11 )
        return 30;
    return 31;
}
int main(){
    int tc; cin >> tc;

    for(int j = 1; j <= tc; j++){
        string s; cin >> s;
        int m,d,y;
        string temp = "";
        temp += s[0];temp+=s[1];
        m = stoi(temp),temp = "";
        temp += s[2],temp+=s[3];
        d = stoi(temp), temp = "";
        temp += s[4],temp+=s[5],temp+=s[6];
        temp+=s[7];
        y = stoi(temp); temp.clear();

        int days = 0;
        for(int i = 1; i < m; i++)
            days += M(i, y);
        days += d + 280; 
        while(true){
            if( days - (365+leap(y)) < 1) break;
            days -= 365+leap(y);
            y++;
        }
        int month = 0;
        while(true){
            month++;
            if( days - M(month, y) < 1) break;
            days -= M(month, y);
        } 
        string sign = zodiac(month, days);
        printf("%d %02d/%02d/%04d ", j, month, days, y);
        cout << sign << endl;
    }
}
string zodiac(int m, int d){
    if( m == 1 && d >= 21 ||  m == 2 && d <= 19 )
        return "aquarius";
     if( m == 2 && d >= 20  || m == 3 && d <= 20)
        return "pisces";
     if( m == 3 && d >= 21 || m == 4 && d <= 20 )
        return "aries";
     if( m == 4 && d >= 21 || m == 5 && d <= 21 )
        return "taurus";
     if( m == 5 && d >= 22 || m == 6 && d <= 21 )
        return "gemini";
     if( m == 6 && d >= 22 || m == 7 && d <= 22 )
        return "cancer";
     if( m == 7 && d >= 23 || m == 8 && d <= 21 )
        return "leo";
     if( m == 8 && d >= 22 || m == 9 && d <= 23 )
        return "virgo";
     if( m == 9 && d >= 24 || m == 10 && d <= 23 )
        return "libra";
     if( m == 10 && d >= 24 || m == 11 && d <= 22 )
        return "scorpio";
     if( m == 11 && d >= 23 || m == 12 && d <= 22 )
        return "sagittarius";
     return "capricorn";
}
