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

/*
assume a matchs are win-lose, b matchs 
are draw. then:
3 * a + 2 * b = sum is total score 
a + b = N the is total matchs
therefore,
b = 3 * N - sum
be care of 3 0 should not be end
*/

int main()
{
	int T, N, a;
	string str;
	while(cin >> T >> N){
		if(T == 0 && N == 0){
			break;
		}
		int sum = 0;
		while(T--){
			cin >> str >> a;
			sum += a;
		}
		cout << (3 * N - sum) << endl;

	}
	return 0;
}


