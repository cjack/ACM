#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int sign = 0;
	float first, second;
	while(cin >> first && first != 999){
		if(sign == 0){
			sign = 1;
			cin >> second;
			if(second == 999){
				break;
			}

			printf("%.2f\n", second - first);
			continue;
		}
		
		printf("%.2f\n", first - second);
		second = first;
	}
	cout << "End of Output" << endl;
	return 0;
}


