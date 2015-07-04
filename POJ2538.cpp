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
	char array[] = "0VXSWDFGUHJKNBIO0EARYCQZT0";
	while(getline(cin, str)){
		for(int i = 0; i < str.length(); i++){
			if(str[i] == ' ') continue;
			if(str[i] > '1' && str[i] <= '9'){
				str[i]--;
				continue;
			}
			if(str[i] > 'A' && str[i] < 'Z'){
				str[i] = array[str[i] - 'A'];
			}
			switch(str[i]){
				case '0': str[i] = '9'; break;
				case '-': str[i] = '0'; break;
				case '=': str[i] = '-'; break;
				case '[': str[i] = 'P'; break;
				case ']': str[i] = '['; break;
				case '\\': str[i] = ']'; break;
				case ';': str[i] = 'L'; break;
				case '\'': str[i] = ';'; break;
				case ',': str[i] = 'M'; break;
				case '.': str[i] = ','; break;
				case '/': str[i] = '.'; break;
			}
		}
		cout << str << endl;
	}
	return 0;
}


