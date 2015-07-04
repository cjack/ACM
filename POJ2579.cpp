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

#define MAX 10

int A[MAX][MAX];
int B[MAX][MAX];
int main()
{
	string str, row[MAX];
	int N = 0, M = 0;
	while(cin >> str){
		if(str == "START"){
			cin >> N >> M;

			for(int i = 0; i < N; i++){
				cin >> row[i];
			}
			for(int i = 0; i < N; i++){
				for(int j = 0; j < M; j++){
					A[i][j] = row[i][j] - '0';
			}
			}
		}else if(str == "END"){
			for(int i = 0; i < N - 1; i++){
				for(int j = 0; j < M - 1; j++){
					B[i][j] = (A[i][j] + A[i + 1][j] + A[i][j + 1] + A[i + 1][j + 1]) / 4;
					cout << B[i][j];
			}
				cout << endl;
			}
			continue;
		}else{
			break;
		}
	}
	return 0;
}


