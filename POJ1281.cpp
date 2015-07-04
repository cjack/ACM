
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
#include <cstdlib>
#include <utility>
#include <cassert>
#include <map>

using namespace std;

typedef long long int ll;
#define PB push_back
#define SZ(A) int(A).size()
#define SP " "


#define FOR(I, L, H) for(int I = L; I < (H); ++I)
#define FORD(I, L, H) for(int I = L; I < (H); --I)
#define REP(I, H) FOR(I, 0, H)
#define REPD(I, H) FORD(I, 0, H)
#define Max(a, b) (a) > (b) ? (a) : (b)

#define CO1(a) cout << a << endl;
#define CO2(a, b) cout << a << SP << b << endl;
#define CO3(a, b, c) cout << a << SP << b << SP << c << endl;
/*
1. set the global count of deleted number
2. set the global array to accept input, size indicator
3. if array is empty, return print -1, otherwist output the Nth deleted number
*/

const int M = 10001;

int r_max(int A[], int& pos, int& s){
	assert (s > 0);
	int m;
	int k = 0;
	while(A[k] == -1) k++;
	m = A[k];
	int mi = k;
	REP(i, pos){
		if(A[i] > m && A[i] != -1){
			m = A[i];
			mi = i;
		}
	}
	A[mi] = -1;
	s--;
	return m;
}

int r_min(int A[], int& pos, int& s){
	assert (s > 0);
	int m;
	int k = 0;
	while(A[k] == -1) k++;
	m = A[k];
	int mi = k;
	REP(i, pos){
		if(A[i] != -1 && A[i] < m){
			m = A[i];
			mi = i;
		}
	}
	A[mi] = -1;
	s--;
	return m;
}

int remove(int p, int A[], int& pos, int& s){
	if(s <= 0){
		return -1;
	}
	if(p == 1){
		return r_min(A, pos, s);
	}else{
		return r_max(A, pos, s);
	}
	return -1;
}

void print(int A[], int pos){
	REP(i, pos){
		CO1(A[i])
	}
}

int main()
{
	int Max, N;
	while(cin >> Max){
		int A[M]; // global array
		int pos = 0; // the array position indicator
		int B[M]; // delete number array;
		int bp = 0; // array B's position indicator
		int s = 0; // size of array
		int process = 1; //global indicator of p mode, default 1
		int del_num = 0;
		cin >> N;

		REP(i, N){
			cin >> B[i]; //input the delete number
		}
		char c;	// command
		int b;	// the number which is followed with c
		while(cin >> c && c != 'e'){
			if(c == 'a'){
				cin >> b;
				A[pos++] = b;
				s++;
			}else if(c == 'r'){
				del_num++;
				if(del_num == B[bp] && bp < N){
					CO1(remove(process, A, pos, s));
					bp++;
				}else{
					remove(process, A, pos, s);
				}
			}else if(c == 'p'){
				cin >> b;
				process = b;
			}
		}
//		print(A, pos);
		cout << endl;
	}
	return EXIT_SUCCESS;
}


