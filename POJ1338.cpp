#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

#define MAX 5000000

int A[MAX];

int Min(int x, int y, int z){
	int min = x < y ? x : y;
	min = min < z ? min : z;
	return min;
}

int main()
{
	int N;
	A[1] = 1;
	int p = 2;
	int i = 1;
	int x_2 = 1, x2;
	int x_3 = 1, x3;
	int x_5 = 1, x5;
	int min = 1;

	while(p < 1501){
		x2 = A[x_2] * 2;

		x3 = A[x_3] * 3;


		x5 = A[x_5] * 5;

		min = Min(x2, x3, x5);
		if(min == x2){x_2++;}
		if(min == x3){x_3++;}
		if(min == x5){x_5++;}


		A[p++] = min;
	}

	while(cin >> N && N != 0){
		cout << A[N] << endl;
	}
	return 0;
}


