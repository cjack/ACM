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

#define SIZE 100001


int a[SIZE];
int main()
{
	long long M;
	int T, U, F, D;
	cin >> M >> T >> U >> F >> D;
	char segment;
	for(int i = 0; i< T; i++){
		cin >> segment;
		if(segment == 'u' || segment == 'd'){
			a[i] = U + D;
		}else{
			a[i] = 2 * F;
		}
	}
	int sum = 0;
	int i;
	for(i = 0; i < T; i++){
		if(sum + a[i]> M){
			break;
		}else{
			sum += a[i];
		}
	}
	cout << i << endl;
	return 0;
}

