#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;



ifstream fin("c:/a.txt");
#define cin fin

//ofstream fout("c:/output.txt");
//#define cout fout
#define PI 3.14159265

int main()
{
	int N;
	double x, y;
	cin>>N;
	for(int i = 0; i < N; i++){
		cin>>x>>y;
		double s = 0;
		double r = 0;
		int year = 0;
		double distance = pow(x*x + y*y,0.5);
		while(r < distance){
			year++;
			s = s + 50;
			r = pow(2 * s / PI, 0.5);
		}
		cout<<"Property "<<i + 1<<": This property will begin eroding in year "<<year<<"."<<endl;
	}
	cout<<"END OF OUTPUT."<<endl;
	return(0);
}
