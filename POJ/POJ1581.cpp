
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;


struct team{
	string name;
	int num;
	int time;
};

const int MAX = 1000;
team T[MAX];
int main(){
	int N;
	int a, b;
	cin >> N;
	int max = -1;
	int min_time = 9999999;
	int max_i = 0;
	int i;
	for(i = 0; i < N; i++){
		int count = 0;
		int sum = 0;
		cin >> T[i].name;
		for(int j = 0; j < 4; j++){
			cin >> a >> b;
			if(b != 0){
				count++;
				sum += (a - 1) * 20 + b;
			}
		}
		if(count > max){
			max = count;
			min_time = sum;
			max_i = i;
		}else if(count == max){
			if(sum < min_time){
				min_time = sum;
				max_i = i;
			}
		}

	}
	cout << T[max_i].name << " " << max << " " << min_time << endl;
	return EXIT_SUCCESS;
}


