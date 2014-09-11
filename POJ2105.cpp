#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int transform(char str[], int length){
	int result = 0;
	for(int i = 0; i < length; i++){
		result = result * 2 + str[i] - '0';
	}
	return result;
}

int main() {
	int N;
	char str[] = "00000111";
	cin >> N;

	while(N--){
		int times = 4;
		while(times--){
			for(int i = 0; i < 8; i++){
				cin >> str[i];
			}
			cout << transform(str, 8);
			if(times != 0){
				cout << ".";
			}else{
				cout << endl;
			}
		}

	}
	return 0;
}


