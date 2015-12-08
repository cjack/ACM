
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
/*
	not very hard, but need to be care about sqrt(double)
*/

int isPrime(int input){
	if(input == 2) return 1;
	for(int i = 2; i < sqrt(input * 1.0) + 1; i++){
		if(input % i == 0)
			return 0;
	}
	return 1;
}


const int range = 10000;
int A[range];
int p = 0;

int count(int input){
	int result = 0;
	int sum = 0;
	for(int i = 0; i <= input; i++){
		if(A[i] > input) break;
		sum = 0;
		for(int j = i; j <= input; j++){
			if(sum < input){
				sum += A[j];
			}else{
				break;
			}
		}
		if(sum == input){
			result++;
		}
	}
	return result;
}

int main(){
	int N;
	for(int i = 2; i < range; i++){
		if(isPrime(i) == 1){
			A[p++] = i;
		}
	}

	while(cin >> N && N != 0){
		cout << count(N) << endl;
	}
	;
	return EXIT_SUCCESS;
}

