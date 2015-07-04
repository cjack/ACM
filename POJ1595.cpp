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
	for(int i = 2; i < sqrt(a * 1.0) + 1; i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}
#define MAX 1001
int A[MAX];
int main()
{
	int N, C;
	A[0] = 0;
	for(int i = 1; i < MAX; i++){
		A[i] = isPrime(i);
	}
	while(cin >> N >> C){
		int start = 0;
		int end = 0;
		int num = 0;
		int count = 0;
		for(int i = 1; i <= N; i++){
			if(A[i] == 1){
				count ++;
			}
		}
		if(count % 2 == 0){
			num = C * 2;
		}
		else{
			num = C * 2 - 1;
		}
		if(num > N){
			num = N;
			start = 1;
			end = count;
		}else{
			start = (count - num) / 2 + 1;
			end = count - (count - num) / 2;
		}

		cout << N << " " << C << ": ";
		count = 0;
		for(int j = 1; j <= N; j++){
			if(A[j] == 1){
				count++;
				if(count >= start && count < end){
					cout << j << " ";
				}
				if(count == end){
					cout << j ;
				}
			}
		}
		cout << endl << endl;;
	}


	return 0;

}


