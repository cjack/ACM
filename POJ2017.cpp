#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main(){
	int N;
	int speed, t, t_last = -1;
	while(cin >> N && N != -1){
		int sum = 0;
		t = 0;
		t_last = -1;
		for(int i = 0; i < N; i++){
			cin >> speed >> t;
			if(t_last == -1) {
				t_last = t;
				sum += t * speed;
			}else{
				sum += (t - t_last) * speed;
				t_last = t;
			}
		}
		cout << sum << " miles" << endl;
	}

	return EXIT_SUCCESS;
}

