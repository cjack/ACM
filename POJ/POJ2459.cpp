#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;


int main()
{
	int C, F1, F2,D;
	int a,b;
	int A[2001];
	for(int i = 0; i < 2001; i++){
		A[i] = 0;
	}
	cin>>C>>F1>>F2>>D;
	for(int i = 0; i < C; i++){
		cin>>a>>b;
		for(int j = a; j <= b; j++){
			A[j]++;
		}
	}
	int sum = F2 + A[D];
	int i = 0;
	for(i = D; i > 0; i--){
		if(sum >= F1) break;
		sum = sum + A[i - 1];
	}
	cout<<i<<endl;
	return(0);
}
