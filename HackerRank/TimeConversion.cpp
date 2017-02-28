

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
    string am = "AM", pm = "PM";
    string rest;
    const int base = 24;

    string in;
    cin >> in;
    int len = in.size(), tt;
    rest = in.substr(2, len - 4);
    tt = (stoi(in.substr(0, 2)));

    if(in.substr(len - 2, len).compare(pm) == 0){
        tt += 12;
        if(tt >= 24) tt -= 12;
        printf("%02d%s\n", tt, rest.c_str());
    }
    else{
        if(tt >= 12) tt -= 12;
        printf("%02d%s\n", tt, rest.c_str());
//        cout << tt << rest << endl;
//        CO1(in.substr(0, len - 2))
    }


    return EXIT_SUCCESS;
}