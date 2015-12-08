#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;


int main()
{
	string str;
	long long a;
	while(cin >> str){
		a = 0;
		int p = 0;
		for(int i = 0; i <= 9; i++){
			if(str[i] == 'X'){
				a = a + (10 * (10 - i));
			}
			else if(str[i] == '?'){
				p = 10 - i;
			}else{
				a = a + (str[i] - '0') * (10 - i);
			}
		}
		int i = 0;
		int sign = 0;
		while(i <= 10){
			if((a + i * p) % 11 == 0){
				sign = 1;
				break;
			}
			i++;
		}
		if(sign == 0 || (i == 10 && p != 1)){
			cout << -1 << endl;
		}else if(i == 10){
			cout << "X" << endl;
		}else{
			cout << i << endl;
		}
	}
	return 0;
}


