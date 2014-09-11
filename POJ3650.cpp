#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	string str;
	while(1){
		getline(cin, str);
		string str_res;
		if(str == "#") break;
		int p = 0;
		for(int i = 0; i < str.length(); i++){
			int sign = 0;
			switch(str[i]){
				case ' ': str_res += "\%20"; sign = 1;break;
				case '!': str_res += "\%21"; sign = 1;break;
				case '$': str_res += "\%24"; sign = 1;break;
				case '\%': str_res += "\%25"; sign = 1;break;;
				case '(': str_res += "\%28"; sign = 1;break;
				case ')': str_res += "\%29"; sign = 1;break;;
				case '*': str_res += "\%2a"; sign = 1;break;
			}
			if(sign == 0){
				str_res = str_res + str[i];
			}
		}
		cout << str_res<<endl;
	}
	return 0;
}


