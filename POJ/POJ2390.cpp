#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;



//ifstream fin("c:/a.txt");
//#define cin fin

//ofstream fout("c:/output.txt");
//#define cout fout


double interest(double money, int year,double rate){
	if(year <= 0) return money;
	money = money*rate;
//	cout<<money<<endl;
	return interest(money, year - 1, rate);
}

int main()
{
	double rate = 0, money;
	int year;
	long result;
	while(cin>>rate>>money>>year){
		rate = 1 + 0.01*rate;
		result = interest(money,year, rate);

		cout<<result<<endl;
	}


	return 0;

}
