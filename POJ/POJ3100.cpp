#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
	long B;
	int N;
	while(cin >> B >> N){
		if(B == 0 && N == N) break;
		int A = pow(B * 1.0, 1.0 / N);
		while(pow(A * 1.0,N) != B){
			if(pow(A * 1.0,N) < B){
				if(pow(A * 1.0 + 1 , N) > B){
					A = abs(pow(A * 1.0 + 1 , N) - B) < abs(pow(A * 1.0 , N) - B) ? A + 1 : A;
					break;
				}
				else{
					A++;
				}
			}else if(pow(A * 1.0, N) > B){
				if(pow(A * 1.0 - 1, N) < B){
					A = abs(pow(A * 1.0 - 1 , N) - B) < abs(pow(A * 1.0 , N) - B) ? A - 1 : A;
					break;
				}else{
					A--;
				}
			}
		}
		cout<<A<<endl;
	}
	return 0;
}


