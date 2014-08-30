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
	int N;
	double r;
	double A[200][2];
	double result;
	cin>>N>>r;
	for(int i = 0; i < N; i++){
		cin>>A[i][0]>>A[i][1];
	}
	for(int i = 0; i < N - 1; i++){
		double temp = sqrt(pow((A[i+1][0] - A[i][0]),2.0)+pow((A[i+1][1] - A[i][1]),2.0));
		result = result + temp;
	}
	result = result + sqrt(pow((A[N -1][0] - A[0][0]),2.0)+pow((A[N-1][1] - A[0][1]),2.0));
	result = result + 2 * PI * r;
	printf("%.2lf", result);
	return 0;

}
