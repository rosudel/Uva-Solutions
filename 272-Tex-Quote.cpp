#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int flag = 1;
	while(getline(cin, str)){
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '\"')
				if(flag & 1){
					str.replace(i,1,"``");
					flag++;
				}
				else{
					str.replace(i,1,"''");
					flag++;
				}
		}
		cout << str << endl;

	}

}
