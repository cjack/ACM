
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;

#ifdef LOCAL

ifstream fin("/Users/yilin/Documents/Study/ACM/input");
#define cin fin

//ofstream fout("/Users/yilin/Documents/Study/ACM/output");
//#define cout fout

#endif
int sumOfShift(int input, int shift){
	int result = 0;
	while(input){
		result += input % shift;
		input /= shift;
	}
	return result;
}


int main(){

	for(int i = 1001; i < 10000; i++){
		if(sumOfShift(i, 10) == sumOfShift(i, 16) && (sumOfShift(i, 10) == sumOfShift(i, 12))){
			cout << i << endl;
		}
	}
	return EXIT_SUCCESS;
}


