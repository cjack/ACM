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
	string A, B;
	cin >> N;
	while(N--){
		int a = 0, b = 0;
		cin >> A >> B;
		for(int i = 0; i < A.length(); i++){
			for(int j = 0; j < B.length(); j++){
				if(i == j & A[i] == B[j]){
					a++;
				}
				else if(A[i] == B[j]){
					b++;
				}
			}
		}
		cout << a << "A" << b << "B" << endl;
	}
	return 0;
}


