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
#include <cassert>

using namespace std;

#define FOR(I, A, B) for(int I = A; I < (B); ++I)
#define REP(I, N) FOR(I, 0, N)
typedef long long int ll;
#define PB push_back
#define SZ(A) int(A).size())
#define SP " "

int main()
{
	string str;
	int q = 0;
	while(getline(cin, str)){

		REP(i, str.size()){
			if(str[i] == '\"'){
				if(q == 0){
					cout << "``";
					q = 1;
				}else{
					cout << "''";
					q = 0;
				}
			}else{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return EXIT_SUCCESS;
}


