#include<iostream>
#include<fstream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;



int main()
{
	int N;
	int a,b;
	while(cin>>N){
		for(int i = 0; i < N; i++){
			cin>>a>>b;
			if(a < b){
				cout<<"NO BRAINS"<<endl;
			}
			else{
				cout<<"MMM BRAINS"<<endl;
			}
		}
	}
	return 0;

}



