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
	string str[20];
	int set = 0;
	while(cin >> N && N != 0){
		set++;
		for(int i = 0; i < N; i++){
			cin >> str[i];
		}
		cout << "SET " << set << endl;

		for(int i = 0; i < N; i++){
			if(i % 2 == 0)
				cout << str[i] << endl;
		}
		for(int i = N - 1; i >= 0; i--){
			if(i % 2 != 0)
				cout << str[i] << endl;
		}

	}
	return 0;
}


