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


bool isPrime(long long a){
	if(a == 1)return false;
	if(a == 2)return true;
	int sign = true;
	for(int i = 2; i < sqrt(a) + 1; i++){
		if(a % i == 0){
			sign = false;
			break;
		}
	}
	return sign;
}

int checkPairs(long long input){
	int counter = 0;
	for(long long i = 3; i < input / 2 + 1; i+=2){
		if(isPrime(i) && isPrime(input - i)){
			counter++;
		}
	}
	return counter;
}

int main() {
	long long input = 12;

	while(cin >> input && input != 0){
		cout << checkPairs(input) << endl;
	}
	return 0;
}


