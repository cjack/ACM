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


#define MAX 101
long A[MAX];
int main()
{
	int N;
	A[0] = 0;
	A[1] = 1;
	for(int i = 2 ; i < MAX; i++){
		A[i] = pow(i * 1.0, 3);
	}
	while(cin >> N){
		for(int t = 2; t <= N; t++){
			for(int i = 2; i < t; i++){
				for(int j = i + 1; j < t; j++){
					for(int k = j + 1; k < t; k++){
						if(A[t] == (A[i] + A[j] + A[k])){
							cout << "Cube = " << t << ", Triple = (" << i<<"," << j <<"," << k << ")" << endl;
						}
					}
				}
			}
		}


	}




	return 0;

}


