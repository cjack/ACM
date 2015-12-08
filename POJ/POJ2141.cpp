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

#define SIZE 1000

int main()
{
	char A[26];
	char c;
	string str;
	for(int i = 0; i < 26; i++){
		cin>>A[i];
	}
	cin.ignore();
	getline(cin, str);
	for(int i = 0; i < str.length(); i++){
		if(str[i] != ' '){
			if(str[i] >= 'a' && str[i] <= 'z'){
				str[i] = A[str[i] - 'a'];
			}
			else if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] = A[str[i] - 'A'] - 32;
			}
		}
	}
	cout<<str<<endl;

	return(0);
}
