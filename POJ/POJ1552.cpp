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


#define MAX 500

int A[MAX];
int main()
{
	int a;
	while(cin >> a && a != -1){
		for(int i = 0; i < MAX; i++){
			A[i] = 0;
		}
		A[a]++;
		A[2 * a]++;
		while(cin >> a && a != 0){
			A[a]++;
			A[2 * a]++;
		}
		int counter = 0;
		for(int i = 0; i < MAX; i++){
			if(A[i] == 2){
				counter ++;
			}
		}
		cout << counter << endl;
	}
	return 0;
}


