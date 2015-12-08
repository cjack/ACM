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


#define MAX 13
int A[MAX];
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	if(str1.length() != str2.length()){
		cout << "NO" << endl;
	}else{
		int x[26], y[26];
		for(int i = 0; i < 26; i++){
			x[i] = 0;
			y[i] = 0;
		}
		for(int i = 0; i < str1.length(); i++){

			x[str1[i] - 'A']++;
		}
		for(int i = 0; i < str2.length(); i++){
			y[str2[i] - 'A']++;
		}
		sort(x, x + 26);
		sort(y, y + 26);

		int sign = 0;
		for(int i = 0; i < 26; i++){
			if(x[i] != y[i]){
				sign = 1;
				break;
			}
		}
		if(sign == 1){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}

	return 0;
}


