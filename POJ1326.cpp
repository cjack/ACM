#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;



int main() {
	string oriCity, disCity;
	long distance;
	char classcode;
	string str;

	int sign = 0;
	while(1){
		long total = 0;
		while(cin >> str && str != "0"){
			if(str == "#"){
				sign = 1;
				break;
			}
			cin >> disCity >> distance >> classcode;
			if(classcode == 'F'){
				total += distance * 2;
			}else if(classcode == 'B'){
				total += distance * 1.5 + 0.5;
			}else if(classcode == 'Y'){
				if(distance <= 500){
					total += 500;
				}else{
					total += distance;
				}
			}
		}

		if(sign == 1){
			break;
		}
		cout << total <<endl;


	}

	return 0;
}
