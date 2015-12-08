#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;


char spaces[11][11] = {
      "",
      " ",
      "  ",
      "   ",
      "    ",
      "     ",
      "      ",
      "       ",
      "        ",
      "         ",
      "          "
     };
int main() {
	string space = " ";
	string input;
	string last = "#";
	int s = 0, th = 0, ls = 0;
	while(getline(cin, input)){
		s = 0;
		if(input == ""){
			cout << input << endl;
			continue;
		}
		if(last == "#"){
			last = input;
		}else{
			int len;
			len = last.length() < input.length() ? last.length() : input.length();
			for(int i = 0; i < len; i++){
				if(last[i] != input[i]){
					break;
				}
				s++;
			}
			th = ++th < s ? th : s;
			cout <<spaces[th];
			last = input;

		}
		cout << input << endl;
	}


	return 0;
}


