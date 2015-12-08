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

#define SIZE 10001
#define LEN 5000
int A[SIZE];


long long transform(long long a){
	long long k = a;
	long long count = 1;
	while(k != 1){

		if(k % 2 == 0){
			k = k / 2;
			count++;
		}else{
			k = (k * 3 + 1)/2;
			count+=2;
		}
	}
	return count;
}

int main()
{
	A[0] = 0;
	A[1] = 1;
	for(int i = 2; i < SIZE; i++){
		A[i] = transform(i);
	}
	int a, b, t, va, vb;
	while(cin >> a >> b){
		long long max = 0;
		if(a <= b){
			va = a;
			vb = b;
		}else{
			va = b;
			vb = a;
		}
		for(int i = va; i <= vb; i++){
			if(A[i] > max){
				max = A[i];
			}
		}
		cout << a <<" " << b << " " << max << endl;
	}



}


