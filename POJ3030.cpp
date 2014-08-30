#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
using namespace std;

long judge(long r, long e, long c){
	return (e - r - c);
}

int main()
{
	int N;
	long a[3];
	long result;
	cin>>N;
	for(int i = 0; i < N; i++){
		cin>>a[0]>>a[1]>>a[2];
		result = judge(a[0], a[1], a[2]);
		if(result > 0){
			cout<<"advertise"<<endl;
		}else if(result == 0){
			cout<<"does not matter"<<endl;
		}else{
			cout<<"do not advertise"<<endl;
		}
	}

	return 0;

}
