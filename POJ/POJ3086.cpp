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

int T(int n){
	return (n + 1) * n / 2;
}

int W(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i * T(i + 1);
	}
	return sum;
}
int main()
{
	int N, n;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> n;
		cout << i + 1 << " " << n << " " << W(n) << endl;
	}
	return 0;
}


