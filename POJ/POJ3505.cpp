#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define SIZE 1000
int A[SIZE][SIZE];
int B[10000][2];
int move[SIZE];
int main()
{
	int N;
	int h,l;
	cin>>N;
	while(N-- > 0){
		cin>>h>>l;
		int sum = 0;
		int mi = 0,mj = 0;
		int count = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < l; j++){
				cin>>A[i][j];
				if(A[i][j] != -1){
					B[A[i][j]][0] = i;
					B[A[i][j]][1] = j;
					count++;
				}

			}
		}
		memset(move, 0, sizeof(move));
		for(int i = 1; i <= count; i++){
			int k = abs(B[i][1] - move[B[i][0]]);
			if(k > abs(l - k)){
				k = abs(l - k);
			}
			sum = sum + B[i][0] * 20 + k*5;
			move[B[i][0]] = B[i][1];
		}
		cout<<sum<<endl;
	}

	return(0);
}
