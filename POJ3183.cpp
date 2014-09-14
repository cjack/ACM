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

#define SIZE 50001
int stumps[SIZE];
int pointer[SIZE];
struct stump{
	int index;
	int num;
};

int cmp(const void *a, const void *b){
	stump va = *((stump *) a);
	stump vb = *((stump *) b);
	return vb.num - va.num;
}


stump array[SIZE];
int main() {
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> stumps[i];
		pointer[i] = 0; // initial the pointer array
		array[i].index = i + 1;
	}
	for(int i = 0; i < N; i++){
		int temp = 1;
		int next = stumps[i];
		for(int j = i + 1; j < N; j++){
			if(stumps[j] < next){
				temp++;
				next = stumps[j];
			}else{
				break;
			}
		}

		next = stumps[i];
		for(int k = i - 1; k >= 0; k--){
			if(stumps[k] < next){
				temp++;
				next = stumps[k];
			}else{
				break;
			}

		}

		array[i].num = temp;
	}
	qsort(array, N, sizeof(stump), cmp);

	int p = 0;
	int T = N;
	while(T > 0){
		int key = array[p++].index - 1;
		int value = stumps[key];

		if(value != -1){
			pointer[key]++;
			int temp = stumps[key];
			stumps[key] = -1;
			T--;

			for(int j = key + 1; j < N; j++){
				if(stumps[j] < value && stumps[j] != -1){
					value = stumps[j];
					stumps[j] = -1;
					T--;

				}else{
					break;
				}
			}
			if(T <= 0) break;
			value = temp;
			for(int k = key - 1; k >= 0; k--){
				if(stumps[k] < value && stumps[k] != -1){
					value = stumps[k];
					stumps[k] = -1;
					T--;

				}else{
					break;
				}


			}
			if(T <= 0) break;
		}else{
			continue;
		}

	}
	for(int i = 0; i < N; i++){
		if(pointer[i] != 0){
			cout << i + 1 << endl;
		}
	}
	return 0;
}


