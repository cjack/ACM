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

int main()
{
	string A, B;
	long long result = 0;
	cin >> A >> B;
	for(int i = 0; i < A.length(); i++){
		for(int j = 0; j < B.length(); j++){
			result += (A[i] - '0') * (B[j] - '0');
		}
	}
	cout << result << endl;
	return 0;
}


