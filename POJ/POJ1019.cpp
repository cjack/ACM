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
#include <cstdlib>
#include <utility>

using namespace std;

long long bits = 0;
const int size = 32000;
int A[size];
long long B[size];
long long C[size];

int countBits(int input){
	int result = 0;
	while(input){
		result++;
		input /= 10;
	}
	return result;
}
int getBits(int input, int bit){
	int t = input, len = 0, x;
	while(t){
		len++;
		t /= 10;
	}
	len--;
	int temp = 0;
	while(bit){
		x = pow(10.0, len) + 0.5;
		temp = input / x;
		input %= x;
		bit--;
		len--;
	}
	return temp;
}

int bSearch(long long array[], int input, int lo, int hi){
	int mid = (hi + lo) / 2;
	if(array[mid] <= input && array[mid + 1] > input){
		return mid;
	}
	else if(array[mid] < input){
		bSearch(array, input, mid + 1, hi);
	}else{
		bSearch(array, input, lo, mid - 1);
	}
}

int search(int input){
	int r = bSearch(C, input, 0, size);
	if(C[r] == input){
		return r % 10;
	}
	input = input - C[r];
//	int b = find(A, input);
	int b = bSearch(B, input, 0, size);
	if(B[b] == input){
		return b % 10;
	}
	b = getBits(b + 1, input - B[b]);

	return b;
}
int main()
{
	long long result = 0;
	for(int i = 1; i < size; i++){
		A[i] = countBits(i);
	}

	B[1] = A[1];
	for(int i = 2; i < size; i++){
		B[i] = B[i - 1]  + A[i];
	}
	C[1] = B[1];
	for(int i = 2; i < size; i++){
		C[i] = C[i - 1] + B[i];
	}

	int N, M;

	cin >> N;
	while(N--){
		cin >> M;
		cout << search(M) << endl;
	}

	return EXIT_SUCCESS;
}


