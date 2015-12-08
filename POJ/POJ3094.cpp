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
	string str;
	while(getline(cin, str) && str.compare("#") != 0){
		int result = 0;
		for(int i = 0; i < str.length(); i++){
			if(str[i] == ' '){
				continue;
			}else{
				result += (i + 1) * (str[i] - 'A' + 1);
			}
		}
		cout << result << endl;
	}
	return 0;
}


