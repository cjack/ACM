#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

#define SIZE 21

char array[SIZE][SIZE];
int main() {
	int N;
	char letter;
	string str;
	while(cin >> N && N != 0){
		cin.ignore();
		getline(cin, str);
		int row = str.length() / N;
		int p = 0;
		for(int i = 0; i < row; i++){
			if(i % 2 != 0){
				for(int j = N - 1; j >= 0; j--){
					array[i][j] = str[p++];
				}
			}else{
				for(int j = 0; j < N; j++){
					array[i][j] = str[p++];
				}
			}

		}

		for(int i = 0; i < N; i++){
			for(int j = 0; j < row; j++){
				cout<<array[j][i];
			}
		}
		cout<<endl;
	}
	return 0;
}


