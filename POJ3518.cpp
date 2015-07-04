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

int isPrime(int a){
	if(a == 1) return 1;
	if(a == 2) return 1;
	for(int i = 2; i < sqrt(a * 1.0) + 1;i ++){
		if(a % i == 0)
			return 0;
	}
	return 1;
}

#define MAX 1300000

int A[MAX];
int main()
{
	A[0] = 0;
	int p = 0;
	for(int i = 1; i < MAX; i++){
		if(isPrime(i) == 1){
			A[i] = p + 1;
			p = 0;
		}
		else{
			p++;
		}
	}

	int N;
	while(cin >> N && N != 0){
		if(isPrime(N) == 1){
			cout << 0 << endl;
		}else{
			int t = N;
			while(A[t] == 0){
				t++;
			}
			cout << A[t] << endl;
		}
	}

	return 0;

}


