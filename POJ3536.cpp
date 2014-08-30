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
//ofstream fout("c:/output2.txt");
//#define cin fin
//#define cout fout


int main()
{
	int N;
	int a,b,c;
	int m;
	int max;
	int ma, mb, mc;
	while(cin>>N){
		int temp = N;
		max  = 100000000000;
		ma = mb = mc = 0;
		m = sqrt(double(N))+1;
		int k = 0;
		for(a = 1; a <=m; a++){
			if(N % a == 0){
				k = N / a;
				for(b = 1;b <=k; b++){
					if(N % b == 0){
						c = k / b;
						if(a*b + a*c + b*c < max && a*b*c == temp){
									max = a*b + a*c + b*c;
									ma = a;
									mb = b;
									mc = c;
									}

					}

				}
			}

		}

		cout<<ma<<" "<<mb<<" "<<mc<<endl;

	}
	return 0;

}
