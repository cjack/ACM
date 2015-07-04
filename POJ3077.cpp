/*
using string to handle
over or equals to 5 then add 1 to previous
be careful:
1. length is 1, output directly
2. if the first char is over '9', output 1 with its length of '0'
*/

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
	string a;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> a;
		if(a.length() == 1 && a[0] >= '0' && a[0] <= '9'){
			cout << a << endl;
		}
		else {
			for(int j = a.length() - 1; j >= 1; j--){
				if(a[j] - '0' >= 5 ){
					a[j - 1]++;
				}
			}
			int t;
			if(a[0] > '9'){
				cout << 1;
				t = a.length();
			}else{
				cout << a[0];
				t = a.length() - 1;

			}
			while(t--){
				cout << 0;
			}
			cout << endl;

		}
	}
	return 0;
}


