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
	int N;
	int a, b;
	cin>>N;
	double result;
	for(int i = 0; i< N; i++){
		cin>>a>>b;
		if(a*b %2 == 0){
			result = a*b;
			cout<<"Scenario #"<<i+1<<":"<<endl;
			printf("%.2lf\n", result);
			cout<<endl;

		}else{
			result = (a*b - 1) + pow(2.0,1.0/2);
			cout<<"Scenario #"<<i+1<<":"<<endl;
			printf("%.2lf\n", result);
			cout<<endl;
		}

	}



	return 0;

}
