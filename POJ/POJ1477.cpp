#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;


//ifstream fin("c:/a.txt");
//#define cin fin

#define SIZE 1000

int main()
{
	int N;
	int a[SIZE];
	int sum = 0;
	int step = 0;
	int round = 0;
	while(1){
		cin>>N;
		round++;
		sum = 0;
		step = 0;
		if(N == 0) break;
		for(int i = 0; i < N; i++){
			cin>>a[i];
			sum = sum + a[i];
		}
		sum = sum / N;  //count the average
		for(int i = 0; i < N; i++){
			step += abs(a[i] - sum);		// add up the distance
		}
		step /= 2;
		cout<<"Set #"<<round<<endl;
		cout<<"The minimum number of moves is "<<step<<"."<<endl;
		cout<<endl;
	}

	return 0;

}
