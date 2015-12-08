#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
struct Hotel{
	int x;
	int y;
};

int cmp_x(const void *a, const void *b){
	 Hotel va = *(Hotel*)a;
	 Hotel vb = *(Hotel*)b;
	 return va.x - vb.x;
}
int cmp_y(const void *a, const void *b){
	 Hotel va = *(Hotel*)a;
	 Hotel vb = *(Hotel*)b;
	 return va.y - vb.y;
}

Hotel A[10001];
Hotel B[10001];
Hotel C[10001];

int main() {
	int N;
	while(cin >> N && N != 0){
		int counter = 0;
		for(int i = 0; i < N; i++){
			cin>>A[i].x>>A[i].y;
		}
		int min_y = 99999;
		int p = 0;
		qsort(A, N, sizeof(Hotel), cmp_x);
		for(int i = 0; i < N; i++){
			if(A[i].y < min_y){
				min_y = A[i].y;
				B[p].x = A[i].x;
				B[p].y = A[i].y;
				p++;
			}
		}
		qsort(A, N, sizeof(Hotel), cmp_y);
		int min_x = 99999;
		int q = 0;
		for(int i = 0; i < N; i++){
			if(A[i].x < min_x){
				min_x = A[i].x;
				C[q].x = A[i].x;
				C[q].y = A[i].y;
				q++;
			}

		}
		for(int i = 0; i < p; i++){
			for(int j = 0; j < q; j++){
				if(B[i].x == C[j].x && B[i].y == C[j].y){
					counter++;
				}
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}


