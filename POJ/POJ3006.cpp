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


int isPrime(long long a){
	long long b = sqrt(a * 1.0);
	int sign = 1;
	if(a == 1) return 0;
	for(int i = 2; i < b + 1; i++){
		if(a % i == 0){
			return 0;
		}
	}
	return sign;
}

int main()
{
	int d, n;
	long long a;
	while(cin >> a >> d >> n){
		if(a == 0 && d == 0 && n == 0){
			break;
		}
		int count = 0;
		int i = 0;
		long long p = 0;
		while(count < n){
			p = a + (i++) *d;
			if(p == 2){
				count++;
				continue;
			}else if(p % 2 != 0 && isPrime(p) == 1){
				count++;
			}
		}
		cout << p << endl;
	}

	return 0;
}

