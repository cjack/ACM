#include<iostream>
#include<fstream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;



int main()
{
	int N;
	long a,b,c,d;
	cin>>N;
		for(int i = 0; i < N; i++){
			cin>>a>>b>>c>>d;
			if((a - b) == (c - d) && (c - d) == (b - c) ){
				cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d + (d - c)<<endl;
				continue;
			}
			if(a/b == b/c && b/c == c/d){
				cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*d/c<<endl;
				continue;
			}
		}

	return 0;

}



