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

	cin >> N;
	while(N--){
		string str;
		cin >> str;
		int count = 1;

		for(int i = 0; i < str.length(); i++){
			if(str[i] == str[i + 1]){
				count ++;
				if(i == str.length() - 1){
					cout << count << str[i];
				}
			}else{
				cout << count << str[i];
				count = 1;
			}
		}


		cout << endl;
	}
	return 0;
}


