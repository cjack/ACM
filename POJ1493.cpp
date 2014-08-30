#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define SIZE 5000

int main()
{
	int line;
	string str1, str2;
	int len[100];
	int max;
	while(cin>>line && line!= 0){
		max = 0;
		for(int i = 0; i < line; i++){
			cin>>str1;
					if(str1.length() >= 25){
						len[i] = str1.length();
						max = str1.length();
					}
					else{
						cin>>str2;
						len[i] = str1.length() + str2.length();
						if(str1.length() + str2.length() > max){
							max = str1.length() + str2.length();
						}
					}
		}
		int sum = 0;
		for(int i = 0; i < line; i++){
			sum = sum + (max - len[i]);
		}

		cout<<sum<<endl;
	}

	return(0);
}
