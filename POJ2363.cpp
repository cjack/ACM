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

int main()
{
	int l, w, h;
	int v, s;
	int N;
	cin >> N;
	while(N--){
		cin >> v;
		int min = 999999999;
		for(int i = 1; i <= v; i++){
			for(int j = i; j <=v; j++){
				if(v % (i * j) == 0 && (i * j <= v)){
					h = v / (i * j);
					s = 2 * (i * j + i * h + j * h);
					if(s < min){
						min = s;
					}
				}

			}
		}
		cout << min << endl;
	}
	return 0;

}


