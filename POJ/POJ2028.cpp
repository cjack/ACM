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



int main()
{
	int N, Q,k;
	int A[200];
	int temp;
	string B;
	int sign = 0;
	while(1){
		cin>>N>>Q;
		if(N == 0 && Q == 0) break;
		for(int i = 0; i < 200; i++){
			A[i] = 0;
		}

		for(int i = 0; i < N; i++){
			cin>>k;
			for(int j = 0; j < k; j++){
				cin>>temp;
				A[temp]++;
			}
		}
		sign = 0;
		int max = 0;
		for(int i = 0; i < 200; i++){
			if(A[i] >= Q && A[i] > max){
				sign = i;
				max = A[i];
			}
		}
		cout<<sign<<endl;

	}

	return 0;

}
