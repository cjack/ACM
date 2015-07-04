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


#define MAX 10000001

int A[MAX];
int main()
{
	int p = 2;
	A[0] = 0;
	A[1] = 1;
	int x2 = 1;
	int x3 = 1;
	int f2, f3;
	while(p < MAX){
		f2 = A[x2] * 2 + 1;
		f3 = A[x3] * 3 + 1;
		if(f2 < f3){
			x2++;
			A[p++] = f2;
		}
		else if(f2 > f3){
			x3++;
			A[p++] = f3;
		}else{
			x2++;
			x3++;
			A[p++] = f2;
		}
	}
	int N;
	while(cin >> N){
		cout << A[N] << endl;
	}

	return 0;

}


