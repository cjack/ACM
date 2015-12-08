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
	for(int i = 0; i < N; i++){
		scanf("%d:%d", &a, &b);
		if(b == 0){
			if(a <= 12){
				cout<<a + 12<<endl;
			}else{
				cout<<a - 12<<endl;
			}
		}else{
			cout<<0<<endl;
		}
	}

	return 0;

}
