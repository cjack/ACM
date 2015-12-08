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

/*
be care of a number end with 11, 12, 13
is appended with "th"
*/

int Min(int a, int b){
	return (a < b ? a : b);
}
#define MAX 5900

int A[MAX];
int main()
{
	int a;
	int x_2 = 1, x2;
	int x_3 = 1, x3;
	int x_5 = 1, x5;
	int x_7 = 1, x7;
	int min = 0, temp1, temp2;
	A[1] = 1;
	int p = 2;
	while(p < MAX){
		x2 = A[x_2] * 2;
		x3 = A[x_3] * 3;
		x5 = A[x_5] * 5;
		x7 = A[x_7] * 7;
		temp1 = Min(x2, x3);
		temp2 = Min(x5, x7);
		min = Min(temp1, temp2);
		if(A[p - 1] != min)
			A[p++] = min;
		if(min == x2){
			x_2++;
		}else if(min == x3){
			x_3++;
		}else if(min == x5){
			x_5++;
		}else if(min == x7){
			x_7++;
		}
	}

	while(cin >> a && a != 0){
		int t = a % 10;
		int t2 = a % 100;
		if(t == 1 && t2 != 11){
			cout << "The " << a << "st humble number is " << A[a] << "." << endl;
		}else if(t == 2 && t2 != 12){
			cout << "The " << a << "nd humble number is " << A[a] << "." << endl;
		}else if(t == 3 && t2 != 13){
			cout << "The " << a << "rd humble number is " << A[a] << "." << endl;
		}else{
			cout << "The " << a << "th humble number is " << A[a] << "." << endl;
		}

	}
	return 0;
}


