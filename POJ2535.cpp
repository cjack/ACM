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

#define SIZE 201

int array[SIZE][SIZE];
int problemList[SIZE];
int main() {
	int N, M;

	cin >> N >> M;
	for(int i = 0; i < M; i++){
		problemList[i] = 0;
	}
	for(int i = 0; i < N; i++){
		int min = 99999999;
		int min_index = 0;
		int max= -1;
		int max_index = 0;
		for(int j = 0; j < M; j++){
			cin >> array[i][j];
			if(array[i][j] > max){
				max = array[i][j];
				max_index = j;
			}
			if(array[i][j] < min){
				min = array[i][j];
				min_index = j;
			}
		}

		for(int j = 0; j < M; j++){
			if(array[i][j] == array[i][min_index] && j != min_index && problemList[j] != -1){
				problemList[j]++;
			}
		}
		for(int j = 0; j < M; j++){
			if(array[i][j] == array[i][max_index] && j != max_index){
				problemList[j] = -1;
			}
		}
		if(problemList[min_index] != -1){
			problemList[min_index]++;
		}
		problemList[max_index] = -1;

	}
	int hurdle = (N / 2);
	int sign = 0;
	int counter = 0;
	for(int i = 0; i < M; i++){
		if(problemList[i] > hurdle){
			sign = 1;
			if(counter == 0){
				cout << i + 1;
			}else{
				cout << " " << i + 1;
			}
			counter++;
		}
	}

	if(sign == 0){
		cout << 0 << endl;
	}else{
		cout << endl;
	}
	return 0;
}


