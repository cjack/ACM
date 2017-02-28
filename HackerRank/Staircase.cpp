

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
    int n;
    cin >> n;
    FOR(ii, 1, n + 1){
        REP(jj, n - ii) cout << SP;
        REP(jj, ii) cout << "#";
        cout << endl;
    }

    return EXIT_SUCCESS;
}