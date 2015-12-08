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



#define MAX 13
int A[MAX];
int main()
{
	long long N;
	string str;

	while(cin >> N >> str && N != 0 && str != "END"){
		char result[6];
		int sign = 0;
		int p = 0;
		int sum = -1;
		for(int i = 0; i < str.length(); i ++){
			A[p++] = str[i] - 'A' + 1;
//			cout << A[p -1] << endl;
		}
		string last = "";
		for(int i = 0; i < p; i++){
			for(int j = 0; j < p; j++){
				if(j == i) continue;
				for(int k = 0; k < p; k++){
					if(k == j || k == i) continue;
					for(int l = 0; l < p; l++){
						if(l == i || l == j || l == k) continue;
						for(int m = 0; m < p; m++){
							if(m == i || m == j || m == k || m == l) continue;
							long long v = A[i];
							long long w = pow(A[j] * 1.0, 2);
							long long x = pow(A[k] * 1.0, 3);
							long long y = pow(A[l] * 1.0, 4);
							long long z = pow(A[m] * 1.0, 5);
							if((v - w + x - y + z) == N ){
								sign = 1;
								int temp = A[i] + A[j] + A[k] + A[l] + A[m];
//								if(temp > sum){
									result[0] = A[i] + 'A' - 1;
									result[1] = A[j] + 'A' - 1;
									result[2] = A[k] + 'A' - 1;
									result[3] = A[l] + 'A' - 1;
									result[4] = A[m] + 'A' - 1;
									result[5] = '\0';
//								}
									string s = string(result);
//									cout << s << endl;
									if(s.compare(last) > 0){
										last = s;
									}
							}

						}
					}
				}
			}
		}
		if(sign == 0){
			cout << "no solution" << endl;
		}else{
			cout << last << endl;
		}
	}
	return 0;
}


