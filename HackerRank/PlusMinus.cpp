#define DEBUG

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cctype>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;


#define SP " "
#define CO1(a) cout << (a) << endl;
#define CO2(a, b) cout << (a) << SP << (b) << endl;
#define CO3(a, b, c) cout << (a) << SP << (b) << SP << (c) << endl;
#define CO4(a, b, c, d) cout << (a) << SP << (b) << SP << (c) << SP << (d) << endl;
#define FOR(ii, m, n) for(int ii = m; ii < n; ++ii)
#define REP(ii, n) FOR(ii, 0, n)
#define FORD(ii, m, n) for(int ii = m; ii >= n; --ii)
#define REPD(ii, m) FORD(ii, m, 0)
#define PB push_back
#define MP(a, b) make_pair((a), (b))
#define ll long long int


int buff = 0;

string rep(string input){
    REP(ii, input.size()){
        input[ii] = tolower(input[ii]);
        if(input[ii] == ' '){
            input[ii] = '-';
        }
    }
    return input;

}
string search_rep(string str, string find, string rep){
    int len = find.size();
    auto s = str.find(find);
    if(s != string::npos){
        str = str.replace(s, len, rep);
    }
    return str;
}



int main() {
    int A[3] = {0,0,0};
    int n, tmp;
    cin >> n;
    REP(ii, n){
        cin >> tmp;
        if (tmp > 0) {
            A[0]++;
        } else if (tmp < 0) {
            A[1]++;
        } else {
            A[2]++;
        }
    }


    REP(ii, 3){
        cout<< setprecision(6) << double(A[ii] * 1.0/ n ) << endl;
    }

    return EXIT_SUCCESS;
}