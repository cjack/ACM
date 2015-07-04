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
#include <cstdlib>
#include <utility>

using namespace std;


int distinceFactor(int input){
	int counter = 0;
	for(int i = 1; i <= input; i++){
		if(input % i == 0){
			counter ++;
		}
	}
	counter %= 2;
	return counter;
}

const int MAX = 101;

int A[MAX];

int main()
{
	int N, a;
	cin >> N;

	for (int i = 1; i < MAX; ++i)
	{
		A[i] = distinceFactor(i);
	}

	while(N--){
		cin >> a;
		int sum = 0;
		for (int i = 1; i <= a; ++i)
		{
			sum += A[i];
		}
		cout << sum << endl;
	}
	return EXIT_SUCCESS;
}


