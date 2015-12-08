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

#define SIZE 100001

int a[SIZE];
int main()
{
	int N;
	while(scanf("%d", &N) && N != 0){
		for(int i = 0; i < N; i++){

			scanf("%d", &a[i]);
		}
		int sign = 0;
		for(int i = 0; i < N; i++){
			if(a[a[i] - 1] != i + 1){

				sign = 1;
				break;
			}
		}

		if(sign == 0){

			printf("ambiguous\n");
		}else{
			printf("not ambiguous\n");
		}
	}

	return 0;
}


