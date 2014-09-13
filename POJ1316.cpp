#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int handleValue(int input){
	int sum = input;
	while(input > 0){
		sum += (input % 10);
		input /= 10;
	}
	return sum;
}

int main() {
	int array[10001];
	int known[] = {1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, 97};
	for(int i = 0; i < 10001; i++){
		array[i] = 0;
	}
	for(int i = 0; i < 13; i++){

		int temp = known[i];
		while(handleValue(temp) < 10001){
			temp = handleValue(temp);
			array[temp]++;
		}
	}
	for(int i = 100; i < 10001; i++){
		int temp = i;
		while(handleValue(temp) < 10001){
			temp = handleValue(temp);
			array[temp]++;
		}
	}
	for(int i = 1; i < 10001; i++){
		if(array[i] == 0){
			cout << i<<endl;
		}
	}
	return 0;
}
