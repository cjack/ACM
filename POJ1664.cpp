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

using namespace std;

typedef long long int ll;
#define PB push_back
#define SZ(A) int(A).size()
#define SP " "


#define FOR(I, L, H) for(int I = L; I < (H); ++I)
#define REP(I, H) FOR(I, 0, H)
#define Max(a, b) (a) > (b) ? (a) : (b)

#define CO1(a) cout << a << endl;
#define CO2(a, b) cout << a << SP << b << endl;
#define CO3(a, b, c) cout << a << SP << b << SP << c << endl;

const int size = 11;
int A[size][size];
int p = 0;

int ceiling(int input, int N){
	int a = input / N;
	return (input * 1.0 / N  > a ? a + 1 : a);
}

void initial(){
	REP(i, size){
		REP(j, size){
			if(i == 0){
				A[i][j] = 1;
			}else if(j == 0){
				A[i][j] = 1;
			}else if(i == 1){
				A[i][j] = 1;
			}else if(i == 2 && j != 1){
				A[i][j] = 2;
			}else if(j == 1){
				A[i][j] = 1;
			}else{
				A[i][j] = 0;
			}
		}
	}
}

void print(){
	REP(i, size){
		REP(j, size){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
int DP(int M, int N, int MAX){
//	CO2(M, N);
	if(M >= 0 && N >= 0){

		int& res = A[M][N];
//		if(N > M && A[M][M] > 0) return A[M][M];
		if(res > 0 && M <= MAX && N <= MAX) return res;
		int ans = 0;

		FOR(i, ceiling(M, N), M + 1){

			if(i <= MAX){
				int t = 1;
				t *= DP(M - i, N - 1, i);
				ans += t;
			}

		}
		if(res == 0)
			res = ans;
		return ans;
	}else{
		return 0;
	}
}

int main()
{
	initial();
	REP(i, size){
		REP(j, size) {
//			if (i >= j)
				DP(i, j, Max(i,j));
		}
	}


	int N, a, b;
	cin >> N;
	REP(i, N){
		cin >> a >> b;
		CO1(DP(a, b, max(a,b)))
	}

	return EXIT_SUCCESS;
}


