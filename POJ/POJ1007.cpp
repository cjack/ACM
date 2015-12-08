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


#define SIZE 500

struct DNA
{
	string str;
	int count;
};
int cmp(const void *a, const void *b){
	DNA va = *((DNA *)a);
	DNA vb = *((DNA *)b);
	return va.count - vb.count;
}
int checkDis(string a, int size){
	int counter = 0;
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if(a[i] > a[j]){
				counter++;
			}
		}
	}
	return counter;
}

int main()
{
	int N, M;
	DNA d[SIZE];
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		getline(cin, d[i].str);
		cin >> d[i].str;
		d[i].count = checkDis(d[i].str, N);
	}
	qsort(d, M, sizeof(DNA), cmp);

	for(int i = 0; i < M; i++){
		cout << d[i].str << endl;
	}

	return 0;
}


