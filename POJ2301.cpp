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
	long long a, b, tempA, tempB, temp;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> a >> b;
		tempA = (a + b) / 2;
		tempB = a - tempA;
		if(a < b || tempA > a || tempB > a || (a + b) % 2 != 0){
			cout << "impossible" << endl;
		}else{
			if (tempA < tempB){
				temp = tempA;
				tempA = tempB;
				tempB = temp;
			}
			cout << tempA << " " << tempB << endl;
		}
	}
	return 0;
}


