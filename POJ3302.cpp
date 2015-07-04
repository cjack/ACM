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
	cin >> N;
	string A, B;
	while(N--){
		cin >> A >> B;
		int sign = 0;
		int j = 0;
		for(int i = 0; i < A.length() && j < B.length(); i++){
			if(A[i] == B[j]){
				j++;
			}
		}
		if(j == B.length()){
			sign = 1;
		}
		if(sign == 0){
			j = B.length() - 1;
			for(int i = 0; i < A.length() && j >= 0; i++){
				if(A[i] == B[j]){
					j--;
				}
			}
		}
		if(j == -1){
			sign = 1;
		}
		if(sign == 1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}

	}
	return 0;
}


