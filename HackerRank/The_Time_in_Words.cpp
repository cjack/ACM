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

string number[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
string extra[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty"};

string numberToWord(int n){
//    assert(n > 0 && n < 30);
    if(n > 0 && n <= 20){
        return number[n];
    }else if(n > 20){
        return "twenty " + number[n % 10];
    }
    return "";
}

string choose(int M, int H){

    if(M == 0){
        return (number[H] + " o' clock");
    }else if(M == 1){
        return ("one minute past " + number[H]);
    }else if(M == 15){
        return ("quarter past " + number[H]);
    }
    else if(M >= 2 && M < 30){
        return numberToWord(M) + " minutes past " + number[H];

    }else if(M == 30){
        return "half past " + number[H];

    }else if(M > 30 && M != 45){
        return numberToWord(60 - M) + " minutes to " + number[H + 1];
    }else if(M == 45){
        return "quarter to " + number[H + 1];
    }
    return "";
}


int main() {

    int H, M;
    while(cin >> H >> M)
    CO1(choose(M, H));

//    FOR(ii, 0, 30){
//       CO1(numberToWord(ii));
//    }




    return EXIT_SUCCESS;
}