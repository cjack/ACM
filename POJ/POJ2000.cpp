#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int MAX = 10001;
int sum[MAX];
int main(){
	int N, p = 1, count = 0;
	for (int i = 1; i < MAX; ++i)
	{
		if(count < p){
			count++;
		}else{
			count = 1;
			p++;
		}
		sum[i] = p;

	}

	 while(cin >> N && N != 0){
		 int result = 0;
	 	for(int i = 1; i <= N; i++){
	 		result += sum[i];
	 	}
	 	cout << N << " " << result << endl;
	 }
	return EXIT_SUCCESS;
}


