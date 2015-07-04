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
	int N, K;
	int s, t, r;
	cin >> N >> K;
	while(K--){
	int total = N;
	int t = 0;
	int sum = 0;
	int temp = 0;
	cin >> s >> t >> r;
	while(total){
		if(t * s >= total){
			if(total % s == 0){
				sum += total / s;
				total = 0;
			}else{
				sum += total / s + 1;
				total = 0;
			}
		}else{
			total = total - t * s;
			sum += t + r;
		}
	}
		cout << sum << endl;
	}
	return 0;
}


