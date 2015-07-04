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


bool check(int x1, int y1, int x2, int y2, int x, int y){
	if(x1 != x2){
		double a = (y1 - y2) * 1.0 / (x1 - x2);
		double b = (x1 * y2 - x2 * y1) * 1.0 / (x1 - x2);
		return (y == (a * x + b));
	}else{
		return (x1 == x);
	}

}

int main() {
	int N;
	int max = 2;
	int array[2001][3];
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> array[i][0] >> array[i][1];
	}

	for(int i = 0; i < N; i++){

		for(int j = i + 1; j < N; j++){
			int temp = 2;
			for(int k =  j + 1; k < N; k++){
				if(check(array[i][0], array[i][1], array[j][0], array[j][1], array[k][0], array[k][1])){
					temp++;
				}
			}
			if(temp > max){
				max = temp;
			}
		}
	}
	cout << max << endl;
	return 0;
}


