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

int p[16][3];
int main() {
	int R, G, B;
	for(int i = 0; i < 16; i++){
		cin >> p[i][0]>> p[i][1]>> p[i][2];
	}
	while(cin >> R >> G >> B){
		if(R == -1 && G == -1 && B == -1){
			break;
		}
		long min = 99999999;
		int minR = -1, minG = -1, minB = -1;
		for(int i = 0; i < 16; i++){
			long tempA = pow((R - p[i][0]) * 1.0 , 2);
			long tempB = pow((G - p[i][1]) * 1.0 , 2);
			long tempC = pow((B - p[i][2]) * 1.0 , 2);
			long sum = sqrt(tempA + tempB + tempC);
			if(sum < min){
				min = sum;
				minR = p[i][0];
				minG = p[i][1];
				minB = p[i][2];
			}
		}
		
		printf("(%d,%d,%d) maps to (%d,%d,%d)\n", R, G, B, minR, minG, minB);
	}

	return 0;
}


