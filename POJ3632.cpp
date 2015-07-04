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

#define SIZE 100001


int a[SIZE];
int main()
{
	int N, M;
	cin >> N;
	for(int i = 0; i < N; i++){

		cin >> M;

		for(int j = 0; j < M; j++){
			cin >> a[j];

		}

		sort(a, a+M);
		int mid = (a[M - 1] - a[0]) *2;
		cout << mid << endl;

	}
	return 0;
}


