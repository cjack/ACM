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

int main() {
	int height;
	int sign = 0;
	for(int i = 0; i < 3; i++){
		cin >> height;
		if(height <= 168){
			sign = 1;
			break;
		}
	}
	if(sign == 1){
		cout << "CRASH " << height << endl;
	}else{
		cout << "NO CRASH" << endl;
	}
	return 0;
}


