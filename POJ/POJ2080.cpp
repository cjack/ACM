#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;

/*
be care of:
59
60
365
366
1460
1461
1520
1521
should output:
2000-02-29 Tuesday
2000-03-01 Wednesday
2000-12-31 Sunday
2001-01-01 Monday
2003-12-31 Wednesday
2004-01-01 Thursday
2004-02-29 Sunday
2004-03-01 Monday
*/

char weekday[][11] = {"Saturday","Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
int Month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int input){
	if(input % 4 != 0 || (input % 100 == 0 && input % 400 != 0)){
		return false;
	}else{
		return true;
	}
}

int countRestDay(int input){
	int year = 2000;
	while((isLeapYear(year) == 0 && input >= 365) || (isLeapYear(year) == 1 && input >= 366)){
		if(isLeapYear(year++) == 0){
			input -= 365;
		}else{
			input -= 366;
		}
	}
	return input + 1;
}
int countYear(int input){
	int year = 2000;
	int count = 0;
	while((isLeapYear(year) == 0 && input >= 365) || (isLeapYear(year) == 1 && input >= 366)){
		if(isLeapYear(year++) == 0){
			input -= 365;
			count ++;
		}else{
			input -= 366;
			count ++;
		}
	}
	return count;
}
void process(int input){
	int year = 2000 + countYear(input);
	int leapYear = 0;
	if(isLeapYear(year)){
		leapYear = 1;
	}else{
		leapYear = 0;
	}

	int rest = countRestDay(input);

	int week = input  % 7;
	int i = 0;

	while((i != 1 && Month[i] < rest) || (i == 1 && Month[1] + leapYear < rest)){
		if(leapYear == 1 && i == 1){
			rest -= (Month[i] + leapYear);
		}else{
			rest -= Month[i];
		}
		i++;
	}


	printf("%d-%02d-%02d %s\n", year, i + 1, rest, weekday[week]);
	return;
}

int main(){
	int N;

	while(cin >> N && N != -1){
		process(N);
	}

	return EXIT_SUCCESS;
}

