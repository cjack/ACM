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


int main() {
	char id[8];
	int factor1[] = {9, 7, 3, 9, 7, 3, 9};
	int factor2[] = {7, 3, 9, 7, 3, 9};
	int N;

	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		int sum = 0;
		int position = -1;
		scanf("%s", &id);
		int j = 0;
		int len = strlen(id);

		j = 0;
		while(id[j] != '\0'){
			if(id[j] != '?'){
				if(len == 7){
					sum += (id[j] - '0') * factor1[j];
				}else{
					sum += (id[j] - '0') * factor2[j];
				}

			}else{
				position = j;
			}
			j++;
		}
		if(sum % 10 == 0){
			id[position] = '0';
		}else{
			for(int a = 1; a < 10; a++){
				if(len == 7){
					if((sum + a * factor1[position]) % 10 == 0){
						sum = a;
						break;
					}
				}else{
					if((sum + a * factor2[position]) % 10 == 0){
						sum = a;
						break;
					}
				}

			}
			id[position] = '0' + sum;
		}
		printf("Scenario #%d:\n", i + 1);
		printf("%s\n\n", id);
	}

	return 0;
}


