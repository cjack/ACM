#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

long fact(int a){
	int i = 1;
	long result = 1;
	while(i <= a){
		result = result*i;
		i++;
	}
	return result;
}

int main()
{
	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;
	int i = 0;
	int n = 0;
	int time = 0;
	double result = 1;
	for(i = 0; i < 10; i++){
		result = 1;
		time = 2;
		n = i;
		while(n >= 1){
			result += 1.0*(fact(n) - 1)/fact(n);
			n--;
			time++;
		}
		cout<<i<<" "<<setprecision(10)<<time - result<<endl;
	}
	return 0;
}
