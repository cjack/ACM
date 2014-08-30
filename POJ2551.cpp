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
	long long x = 1;
	int N;
	while(cin>>N){
		x = 1;
		int count = 1;
		x %= N;
		while(x){
			x = x*10 + 1;
			count++;
			x %= N;
		}
		cout<<count<<endl;
	}
	return(0);
}
