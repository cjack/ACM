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
	int A, a, B, b, P;
	cin>>A>>a>>B>>b>>P;
	if(A > P || B > P || (A + B > P && (A > b && A <= B || B > a && B <= A))){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}

	return 0;

}
