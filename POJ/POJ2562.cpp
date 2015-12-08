#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int check(long long a, long long b){
	int count = 0, carry = 0;
	int tempA, tempB;
	while(a != 0 && b != 0){
		tempA = a % 10;
		tempB = b % 10;

		if(tempA + tempB + carry >= 10){
			count++;
			carry = 1;

		}else{
			carry = 0;
		}
		a = a / 10;
		b = b / 10;
	}

	if(a == 0 && b % 10 + carry >= 10){

		while(b % 10 + carry >= 10){
			count++;
			tempB = b % 10;
			if(tempB + carry >= 10){
				carry = 1;

			}else{
				carry = 0;
			}
			b = b / 10;
		}
	}

	if(b == 0 && a % 10 + carry >= 10){
		while(a % 10 + carry >= 10){
			count++;
			tempA = a % 10;

			if(tempA + carry >= 10){
				carry = 1;

			}else{
				carry = 0;
			}
			a = a / 10;
		}
	}
	return count;

}

int main() {
	long long va, vb;
	while(cin >> va >> vb && (va != 0 || vb != 0)){
		int result = check(va, vb);
		if(result == 0){
			cout << "No carry operation." << endl;
		}else if(result == 1){
			cout<< result << " carry operation." << endl;
		}else{
			cout<< result << " carry operations." << endl;
		}
	}
	return 0;
}


