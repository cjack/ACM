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


int A[31000];
int main()
{
	int N,L;
	cin>>N>>L;
	for(int i = 0; i < N; i++){
		cin>>A[i];

	}
	int year = 0;
	int max = 10000000;
	int sum;
	for(int i = 0; i < 30000; i++){
		sum = 0;
		for(int j = 0; j < N; j++){
			sum += ((A[j]+i) % L);
		}
		if(sum < max){
			max = sum;
			year = i;

		}

	}
	cout<<year<<endl;
	return 0;

}
