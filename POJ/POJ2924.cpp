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


int main() {
	int N;
	long long a, b;
	cin >> N;
	int p = 1;
	while(N--){

		cin >> a >> b;
		cout << "Scenario #" << p++ << ":" <<endl;
		cout << ((a + b) * (b - a + 1))/ 2 <<endl;
		cout << endl;
	}
	return 0;
}


