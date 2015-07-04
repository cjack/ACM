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
	int N, M, score;
	while(cin >> N && N != 0){

		int min = 999999;
		int max = -1;
		long long mean = 0;
		int count  = 0;

		for(int i = 0; i < N; i++){
			cin >> score;
			if(score > max) max = score;
			if(score < min) min = score;
			mean += score;
			count++;
		}
		mean = (mean - min - max) / (count - 2);
		cout << mean << endl;
	}

	return 0;
}


