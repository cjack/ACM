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

struct dic{
	string ordered;
	string ori;
};

int cmp(const void *a, const void *b){
	dic va = *((dic *)a);
	dic vb = *((dic *)b);
	return va.ori.compare(vb.ori);
}

string sortStr(string input){
	sort(input.begin(),input.end());
	return input;
}
int main() {
	dic dict[101];
	string input;
	string end = "XXXXXX";
	string signal = "******";
	int p = 0;

	while(cin >> input && input != end){
		dict[p].ori = input;
		dict[p].ordered = sortStr(input);
		p++;
	}
	qsort(dict, p, sizeof(dic), cmp);

	int q = 0;
	while(cin >> input && input != end){
		int temp = 0;
		input = sortStr(input);
		for(int i = 0; i < p; i++){
			if(dict[i].ordered == input){
				temp = 1;
				cout << dict[i].ori << endl;
			}
		}
		if(temp == 0){
			cout << "NOT A VALID WORD" << endl;
		}
		cout << signal << endl;
	}

	return 0;
}


