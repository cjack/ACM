#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
using namespace std;

//ifstream fin("c:/a.txt");

//#define cin fin
#define MAX 10000000

int distanceToSumOfFactors(int input){
	int sum = 0;
	int i = 1;
	while(i < input){
		if(input % i == 0){
			sum += i;
		}
		i++;
	}
	return sum - input;
}

int main()
{
	int N;
	char D[] = "DEFICIENT";
	char P[] = "PERFECT";
	char A[] = "ABUNDANT";
 	cout<<"PERFECTION OUTPUT"<<endl;
	while(1){
		cin>>N;
		int distance = distanceToSumOfFactors(N);
//		cout<<distance<<endl;
		if(N == 0) break;
		if(distance > 0){
			printf("%5d  %s\n",N, A);
		}else if(distance == 0){
			printf("%5d  %s\n",N, P);
		}else{
			printf("%5d  %s\n",N, D);
		}

		//cout<<N<<endl;

	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;

}
