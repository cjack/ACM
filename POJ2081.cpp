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

#define SIZE 500001
#define SIZE2 4000000
int A[SIZE];
int B[SIZE2];


int main() {
	long N;
	for(int i = 1; i < SIZE; i++){
			A[i] = -1;
	}
	for(int i = 1; i < SIZE2; i++){
			B[i] = -1;
	}
	A[0] = 0;
	B[0] = 1;
	for(int i = 1; i < SIZE; i++){
		if(A[i - 1] - i > 0 && B[A[i - 1] - i] == -1){
			A[i] = A[i - 1] - i;
			B[A[i]] = 1;
		}else{
			A[i] = A[i - 1] + i;
			B[A[i]] = 1;
		}
	}
	
	while(cin >> N && N != -1){
		cout << A[N] << endl;
	}
	return 0;
}


