#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;


#define PI 3.141592

int main()
{
	long N, M, a, b;
	long result;
	while(1){
		cin>>N>>M;
		if(N == 0 && M == 0){
			break;
		}
		result = N + 1;
		for(int i = 0; i < M;i++){
			cin>>a>>b;
			result = result - (b - a + 1);
		}
		cout<<result<<endl;
	}

	return 0;

}
