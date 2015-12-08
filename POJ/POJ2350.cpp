#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define SIZE 1000

int main()
{
	int N,k;
	int A[SIZE];
	cin>>N;
	for(int i = 0; i < N; i++){
		cin>>k;
		double sum = 0;
		for(int j = 0; j < k; j++){
			cin>>A[j];
			sum += A[j];
		}
		sum = sum / k;
		int count = 0;
		for(int j = 0; j < k; j++){
			if(A[j] > sum){
				count++;
			}
		}
		double result = count*100.0 / k;
		printf("%.3lf%%\n", result);
	}
	return(0);
}
