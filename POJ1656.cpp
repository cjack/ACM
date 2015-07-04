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

#define MAX 101

int A[MAX][MAX];

void black(int x, int y, int L){
	for(int i = x; i <= x + L - 1; i++){
		for(int j = y; j <= y + L - 1; j++){
			A[i][j] = 1;
		}
	}
}

void white(int x, int y, int L){
	for(int i = x; i <= x + L - 1; i++){
		for(int j = y; j <= y + L - 1; j++){
			A[i][j] = 0;
		}
	}
}

void test(int x, int y, int L){
	int sum = 0;
	for(int i = x; i <= x + L - 1; i++){
		for(int j = y; j <= y + L - 1; j++){
			if(A[i][j] == 1){
				sum++;
			}
		}
	}
	cout << sum << endl;
}

int main()
{
	int N;
	string str;
	int x, y, L;
	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			A[i][j] = 0;
		}
	}
	cin >> N;
	while(N--){
		cin >> str >> x >> y >> L;

		if(str == "BLACK"){
			black(x, y, L);
		}
		if(str == "WHITE"){
			white(x, y, L);
		}
		if(str == "TEST"){
			test(x, y, L);
		}
	}
	return 0;
}


