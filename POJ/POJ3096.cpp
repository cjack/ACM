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

ifstream fin("c:\\a.txt");
#define cin fin


//ofstream fout("c:\\output.txt");
//#define cout fout


int main()
{
	string str;
	char temp[80][2];
	while(cin >> str && str != "*"){
		int sign = 1;
		int isEqual = 0;


		for(int j = 1; j < str.length(); j++){
			int p = 0;
			temp[p][0] = str[0];
			temp[p][1] = str[j];
			p++;
			for(int i = 1; i < str.length() - j + 1; i++){
				int isEqual = 0;
				for(int k = 0; k < p; k++){
					if(str[i] == temp[k][0] && str[i + j] == temp[k][1]){
//						cout <<str[i]<< " " <<  temp[k][0] << " " << str[i + j] << " " << temp[k][1] << endl;
						isEqual = 1;
						sign = 0;
						break;
					}
				}
				if(isEqual == 0){
					temp[p][0] = str[i];
					temp[p][1] = str[i + j];
					p++;
				}
				else{
					break;
				}
			}
			if(sign == 0){
				break;
			}
		}
		if(sign == 1){
			cout << str << " is surprising." << endl;
		}
		else{
			cout << str << " is NOT surprising." << endl;
		}

	}

	return 0;

}


