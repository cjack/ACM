
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
#include <cmath>
using namespace std;



int main() {
	long double a, b;
	long long c;
	while(cin >> a >> b){
		c = pow(b*1.0, 1.0 / a) + 0.5;
		cout << c << endl;
	}


	return 0;
}


