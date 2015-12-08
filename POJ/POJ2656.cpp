#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;

#define SIZE 1000

int main()
{
	int N;
	int a, b;
	int result = 0;
	int unhappyDegree = 0;
	while(1){
		cin>>N;
		if(N == 0) break;
		result = 0;
		unhappyDegree = 0;
		for(int i = 0; i < N; i++){
			cin>>a>>b;
			if(a + b > 8 && a + b > unhappyDegree){
				result = i + 1;
				unhappyDegree = a + b;
			}
		}
		cout<<result<<endl;
	}

	return 0;

}
