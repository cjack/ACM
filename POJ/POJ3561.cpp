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


#define MAX 11

int main()
{
	int T, N, M;
	char a[MAX][MAX];
	cin >> T;

	while(T--){
		cin >> N >> M;
		int sign = 0;

		int lx, ly;
		char last;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> a[i][j];
			}
		}
		int check = -1;
		int end = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(a[i][j] == '.'){
					continue;
				}else{
					if(check == -1){
						lx = i;
						ly = j;
						last = a[i][j];
						switch(a[i][j]){
							case '-': check = 1; sign = 1;break;
							case '|': check = 2; sign = 1;break;
							case '/': check = 3; sign = 1;break;
							case '\\': check = 4; sign = 1;break;
						}
					}else{

						if(a[i][j] != last){
							sign = 0;
							end = 1;
							break;
						}else{
							switch(a[i][j]){
								case '-': if(abs(j - ly) == 1 && i == lx) sign = 1;else {sign = 0;end = 1;}break;
								case '|': if(abs(i - lx) == 1 && j == ly) sign = 1;else {sign = 0;end = 1;}break;
								case '/':
									if((i == lx - 1 && j == ly + 1)||(i == lx + 1 && j == ly - 1))
										sign = 1;else {sign = 0;end = 1;};break;
								case '\\': if((i == lx - 1 && j == ly - 1)||(i == lx + 1 && j == ly + 1))
									sign = 1;else {sign = 0;end = 1;}break;
							}
						}
						lx = i;
						ly = j;
						last = a[i][j];

					}
				}


			}
			if(end == 1)break;
		}
		if(sign == 0 || end == 1){
			cout << "INCORRECT" << endl;
		}
		else{

			cout << "CORRECT" << endl;

		}


	}
	return 0;
}


