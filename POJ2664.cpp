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

bool check(string str, string a[], int num){
	for(int i = 0; i < num; i++){
		if(str == a[i]){
			return true;
		}

	}
	return false;
}

int main() {
	int k, m, c, r;

	while(cin >> k && k != 0){
		cin >> m;
		string str[k];
		int pass = 1;
		for(int i = 0; i < k; i++){
			cin >> str[i];
		}
		for(int j = 0; j < m; j++){
			string temp;
			cin >> c >> r;
			int sum = 0;
			for(int p = 0; p < c; p++){
				cin >> temp;
				if(check(temp, str, k)){
					sum++;
				}
			}
			if(sum < r){
				pass = 0;
			}
		}
		if(pass == 0){
			cout << "no" << endl;
		}else{
			cout << "yes" << endl;
		}
	}
	return 0;
}


