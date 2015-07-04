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


string Haab[] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
string Tzol[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};

int strToInt(string str){
	int result = 0;
	for(int i = 0; i < str.length(); i++){
		result = result * 10 + (str[i] - '0');
	}
	return result;
}
int checkHaab(string a){
	for(int i = 0; i < 19; i++){
		if(a == Haab[i]){
			return i;
		}
	}
}
long long countHaab(int day, int mon, int year){
	int numYear = 365;
	long long result = day;
	result += mon * 20;
	result += year * 365;
	return result;
}

void printTzo(long long total){
	int year = (total / 260.0);
	total %= 260;
	int day = total % 13 + 1;
	int mon = total % 20;
	cout << day << " " << Tzol[mon] << " " << year << endl;
}
int main() {


	int N;
	string day, mon;
	int year;
	cin >> N;
	cout << N << endl;
	for(int i = 0; i < N; i++){
		cin >> day >> mon >> year;
		day = day.substr(0, day.length() - 1);
		int numDay = strToInt(day);
		int numMon = checkHaab(mon);
		long long total = countHaab(numDay, numMon, year);
		printTzo(total);
	}
	return 0;
}


