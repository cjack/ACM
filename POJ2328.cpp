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



int main()
{
	int N;
	int A[11];
	string str;
	int is_start = 0;
	while(cin >> N && N != 0){
		if(is_start == 0){
			for(int i = 0; i < 11; i++){
				A[i] = 1;
			}
			is_start = 1;
		}
		cin.ignore();
		getline(cin, str);
		if(str == "too high"){
			for(int i = N; i < 11 ; i++){
				A[i] = 0;
			}
		}
		else if(str == "too low"){
			for(int i = 0; i <= N ; i++){
				A[i] = 0;
			}
		}else if(str == "right on"){
			is_start = 0;
			if(A[N] == 1){
				cout << "Stan may be honest" << endl;
			}else{
				cout << "Stan is dishonest" << endl;
			}
		}
	}
	return 0;
}


