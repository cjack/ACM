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
	int children[101];
	int	e;
	int sum = 0;
	cin>>N;
	cin>>e;
	for(int i = 0; i < N; i++){
		cin>>children[i];
	}
	for(int i = 0; i < N; i++){
		int temp = pow(children[i]*1.0,e*1.0);
		if(sum + temp > sum){
			sum = sum + temp;
		}
	}
	cout<<sum<<endl;

	return 0;

}
