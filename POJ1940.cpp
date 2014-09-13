#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;


#define SIZE 5000
long double coordinates[SIZE][2];

int main() {
	int N;
	while(cin >> N){
		long long sumX = 0, sumY = 0;
		cout << N << " ";
		for(int i = 0; i < N; i++){
			cin >> coordinates[i][0] >> coordinates[i][1];

			if(i % 2== 0){
				sumX +=  coordinates[i][0];
				sumY +=  coordinates[i][1];
			}else{
				sumX -=  coordinates[i][0];
				sumY -=  coordinates[i][1];
			}

		}
		long double x = sumX;
		long double y = sumY;
		int i = 0;
		cout <<fixed<<setprecision(6)<< x << " " << y << " ";
		for(i = 0; i < N - 2; i++){
			x = coordinates[i][0]*2 - sumX;
			y = coordinates[i][1]*2 - sumY;
			sumX = x;
			sumY = y;
			cout <<fixed<<setprecision(6)<< x << " " << y << " ";
		}
		x = coordinates[i][0]*2 - sumX;
		y = coordinates[i][1]*2 - sumY;
		cout <<fixed<<setprecision(6)<< x << " " << y << endl;
	}

	return 0;
}


