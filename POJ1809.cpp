#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int X[4][4][4];


void initial(){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			for(int k = 0; k < 4; k++){
				X[i][j][k] = 1;
			}
		}
	}
	X[0][1][2] = 0;
	X[0][1][3] = 0;
	X[1][0][2] = 0;
	X[1][0][3] = 0;
	X[0][2][1] = 0;
	X[0][3][1] = 0;
	X[1][2][0] = 0;
	X[1][3][0] = 0;
	X[0][2][3] = 0;
	X[0][3][2] = 0;
	X[1][2][3] = 0;
	X[1][3][2] = 0;
	X[2][0][1] = 0;
	X[2][1][0] = 0;
	X[3][0][1] = 0;
	X[3][1][0] = 0;
	X[2][0][3] = 0;
	X[2][1][3] = 0;
	X[3][0][2] = 0;
	X[3][1][2] = 0;
	X[2][3][0] = 0;
	X[2][3][1] = 0;
	X[3][2][0] = 0;
	X[3][2][1] = 0;
}
int main() {
	long long N, I;
	initial();

	cin >> N;
	for (long i = 0; i < N; i++) {
		cin >> I;
		long long B[4] = {0,0,0,0};
		long long K,T;
		for (long j = 0; j < I; j++) {
			cin >> K >> T;
			K = K % 2 == 0 ? 0 : 1;
			T = T % 2 == 0 ? 0 : 1;
			B[K * 2 + T]++;
		}
		cout <<"Scenario #"<< (i + 1) <<":"<< endl;
		if (I <= 2) {
			cout <<0<< endl;
			cout<<endl;
		} else {
			long long counter = 0;
			cout<<B[0]<<B[1]<<B[2]<<B[3]<<endl;
			for(long a = 0; a < 4; a++){
					for(long b = a; b < 4; b++){
						for(long c = b; c < 4; c++){
							if(X[a][b][c] == 1){
								long long Va = B[a];
								long long Vb = B[b];
								long long Vc = B[c];
								if(a == b && b ==c){
									if(Va < 3){
										continue;
									}else{
										//combination n 3
										counter += Va * (Va - 1)*(Va - 2) / 6;
										continue;
									}
								}else if(a == b){
									if(Va < 2) continue;
									else counter += (Va * (Va - 1) / 2) * Vc;
								}else if(b == c){
									if(Vb < 2) continue;
									else counter += (Vb * (Vb - 1) / 2) * Va;
								}else if(a == c){
									if(Va < 2) continue;
									else counter += (Va * (Va - 1) / 2) * Vb;
								}
								else{
									counter = counter + Va*Vb*Vc;
								}


							}
						}
					}
				}

			cout << counter << endl;
			cout << endl;

		}
	}

	return 0;
}


