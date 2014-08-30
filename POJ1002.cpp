#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
using namespace std;

#define MAX 10000000
unsigned T[MAX];
int A[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,-1,7,7,8,8,8,9,9,9,-1};
int isNumber(char a){
	if(a >= '0' && a <= '9'){
		return 1;
	}
	return 0;
}

int isLetter(char a){
	if(a >= 'A' && a <= 'Z'){
		return 1;
	}
	return 0;
}

int handle(char a){
	int value = -1;
	if(isNumber(a)){
		value = (a - '0');
	}
	if(isLetter(a)){
		value = A[a - 'A'];
	}
	return value;
}

long normalization(char input[8], int size){
	int value = 0;
	int sum = 0;

	for(int i = 0; i < size; i++){
		if(input[i] == '-') continue;
		if(sum > 7) break;
		value = value * 10 + handle(input[i]);
		sum++;
	}
	return value;
}


int main()
{
	int n = 0;
	char C[100];
	cin>>n;
	//initial the array
	for(int i = 0;i < MAX; i++){
		T[i] = 0;
	}
	for(int i = 0; i < n; i++){
		cin>>C;
		long temp = normalization(C, strlen(C));
		T[temp]++;
	}
	int sign = 0;
	for(int i = 0; i < MAX; i++){
		if(T[i] > 1){
			sign = 1;
			printf("%03d-%04d %d\n", i / 10000, i%10000, T[i]);
		}
	}
	if(sign == 0){
		cout<<"No duplicates."<<endl;
	}
	return 0;

}
