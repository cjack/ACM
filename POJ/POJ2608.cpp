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
	char soundex[] ="01230120022455012623010202";
	string str;
	while(cin >> str){
		int last = -1;
		long long result = 0;
		for(int i = 0; i < str.length(); i++){
			int temp = (soundex[str[i] - 'A']) - '0';
			if(last == -1){
				result = result * 10 + temp;
				last = temp;
			} else if(last == temp || temp == 0){
				last = temp;
				continue;
			}
			else{
				result = result * 10 + temp;
				last = temp;
			}
		}
		if(result != 0)
		cout << result << endl;
		else{
			cout << endl;
		}
	}
	return 0;

}


