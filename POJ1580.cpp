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


int checkCommon(string str1, string str2){

	int len = str1.length() < str2.length() ? str1.length() : str2.length();
	int count = 0;
	for(int i = 0; i < len; i++){
		if(str1[i] == (str2[i])){
			count++;
		}

	}
	return count;
}

int main()
{
	string str1, str2;
	while(cin >> str1 && str1 != "-1"){
		cin >> str2;
		int max1 = 0;
		int max2 = 0;
		for(int i = 0; i < str1.length(); i++){

			int temp = checkCommon(str1.substr(i, str1.length()), str2);
			if(temp > max1){
				max1 = temp;
			}

		}
		for(int i = 0; i < str2.length(); i++){
			int temp = checkCommon(str2.substr(i, str2.length()), str1);
			if(temp > max2){
				max2 = temp;
			}
		}

		max1 = max1 > max2 ? max1 : max2;

		cout << "appx(" << str1 << "," << str2<< ") = ";
		if(max1 == 0){
			cout << 0 << endl;
		}
		else{
			int t1 = str1.length() + str2.length();
			int t2 = (max1 * 2);
			if(t1 == t2){
				cout << 1 << endl;
			}
			else{
				int i = 2;
				int m = t2;
				while(i <= m){

					while(t2 % i == 0 && t1 % i == 0){

						t2 /= i;
						t1 /= i;
					}
					i++;
				}
				cout << t2 << "/" << t1 << endl;
			}

		}
	}

	return 0;

}


