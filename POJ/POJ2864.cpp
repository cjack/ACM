#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;


int main()
{
	int N, D;
	int sign = 0;
	int a[500];
	int value;
	while(1){
		cin>>N>>D;
		if(N == 0 && D == 0) break;
		sign = 0;
		for(int i = 0; i < N; i++){
			a[i] = 0;
		}

			for(int j = 0; j < D; j++){
				for(int i = 0; i < N; i++){
				cin>>value;
				a[i] = a[i] + value;

			}
		}
		for(int i = 0; i < N; i++){
			if(a[i] == D){
				sign = 1;
				break;
			}
		}
		if(sign == 1){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}

	return 0;

}
