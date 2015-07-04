#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;

double average(double A[], double a, int n){
	double sum = 0;
	for(int i = a; i >= a - n + 1; i--){
		sum += A[i];
	}
	return sum / n;
}

const int range = 10001;
double A[range];

int main(){
	int m, n, k, trend = 0;
	cin >> m >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> A[i];
		if(i >= n){
			if(average(A, i, m) > average(A, i, n)){
				if(trend == 1 || i == n){
					cout << "BUY ON DAY " << i << endl;
				}
				trend = -1;
			}else if(average(A, i, m) < average(A, i, n)){
				if(trend == -1 || i == n){
					cout << "SELL ON DAY " << i << endl;
				}
				trend = 1;
			}else{
				trend = 0;
			}
		}
	}


	return EXIT_SUCCESS;
}

