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
	long long first_x, first_y;
	long long last_x, last_y;
	long long input_x, input_y;
	double x, y;
	while(cin >> N){
		cout << N << " ";
		for(int i = 0; i < N; i++){
			cin >> input_x >> input_y;
			if(i == 0){
				first_x = input_x;
				first_y = input_y;
				last_x = input_x;
				last_y = input_y;
				continue;
			}
				x = (last_x + input_x) / 2.0;
				y = (last_y + input_y) / 2.0;
				printf("%.06lf %.06lf ", x, y);

			last_x = input_x;
			last_y = input_y;
		}
		x = (first_x + input_x) / 2.0;
		y = (first_y + input_y) / 2.0;
		printf("%.06lf %.06lf\n", x, y);
	}

	return 0;
}


