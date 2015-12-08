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


#define SIZE 5000

int main()
{
	int N;
	int A[SIZE];
	int B[SIZE];
	while(cin>>N){
		for(int i = 0; i < N; i++){
			cin>>A[i];
			B[i] = 0;
		}
		for(int j = 0; j < N - 1; j++){
			B[abs(A[j] - A[j + 1])]++;
		}
		int sign = 0;
		for(int i = 1; i <= N - 1; i++){
			if(B[i] == 0){
				sign = 1;
				break;
			}
		}

		if(sign == 0){
				cout<<"Jolly"<<endl;
			}
			else{
				cout<<"Not jolly"<<endl;
			}
	}

	return 0;

}
