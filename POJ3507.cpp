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


int main()
{
	double a[6];
	while(1){
		cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
		if(a[0] == 0 && a[1] == 0 && a[2] ==0 && a[3] == 0 && a[4] == 0 && a[5] ==0){
			break;
		}
		sort(a, a + 6);
		cout<<(a[1] + a[2] + a[3] + a[4])/4.0<<endl;
	}

	return 0;

}
