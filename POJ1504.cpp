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


int reverse(int n){
	int sum = 0;
	while(n){
		sum = sum * 10 + n % 10;
		n = n / 10;
	}
	return sum;
}

int main()
{
	int N;
	int a, b, result;
	cin >> N;
	while(N--){
		cin >> a >> b;
		result = reverse(a) + reverse(b);
		cout << reverse(result) << endl;
	}

	return 0;
}


