
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

using namespace std;


#define Gauss(N) (N * (N + 1) / 2)
#define M(a, b) ((a) > (b) ? (a) : (b))

const int MAX = 101;
int A[MAX][MAX];
int D[MAX][MAX];

int DP(int i, int j, int N){
	int& ans = D[i][j];
	if(i <= N && j <= N){
		if(ans > 0) return  ans;
		ans = M(DP(i + 1, j, N) + A[i][j], DP(i + 1, j + 1, N) + A[i][j]);
		return  ans;
	}else{
		return 0;
	}

}


int main()
{
	int N;
	cin >> N;
	int total = Gauss(N);
//	cout << total << endl;
	for (int i = 1; i <= N; ++i)
	{
		for(int j = 1; j <= i; ++j){
			cin >> A[i][j];
			D[i][j] = 0;
		}
	}
	cout << DP(1, 1, N) << endl;

	return EXIT_SUCCESS;
}

