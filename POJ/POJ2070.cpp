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
	double speed, weight, strength;
	while(cin >> speed >> weight >> strength){
		int sign = 0;
		if(speed == 0 && weight == 0 && strength == 0){
			break;
		}
		if(speed <= 4.5 && weight >= 150 && strength >= 200){
			cout << "Wide Receiver ";
			sign = 1;
		}
		if(speed <= 6.0 && weight >= 300 && strength >= 500){
			cout << "Lineman ";
			sign = 1;
		}
		if(speed <= 5.0 && weight >= 200 && strength >= 300){
			cout << "Quarterback ";
			sign = 1;
		}
		if(sign == 0){
			cout << "No positions";
		}
		cout << endl;
	}
	return 0;

}


