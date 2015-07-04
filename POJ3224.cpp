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
int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> A[i][j];
		}
	}
	int max = 0;
	int max_i = 0;
	int i, j;
	for(i = N - 1; i >= 0; i--){
		int temp = 0;
		for(j = N - 1; j >= 0; j--){
			if(A[i][j] == 3)
			temp++;
		}
		if(temp >= max){
			max = temp;
			max_i = i;

		}
	}
	cout << max_i + 1<< endl;
	return 0;
}


