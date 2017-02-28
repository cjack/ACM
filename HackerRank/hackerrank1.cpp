#define LOCAL

//----------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <utility>
#include <vector>
#include <unordered_map>

using namespace std;

//-------------------------------------------  Local Read and Write Setting---------------------------------------------

#ifdef LOCAL
ifstream fin("/Users/yilin1/Documents/CLion/Test/input");
#define cin fin

//ofstream fout("/Users/yilin1/Documents/CLion/Test/input");
//#define cout fout

#endif

//----------------------------------------- Default Definitions Part   -------------------------------------------------

#define ll long long int
#define SP " "
#define CO1(a) cout << (a) << endl;
#define CO2(a, b) cout << (a) << SP << (b) << endl;
#define CO3(a, b, c) cout << (a) << SP << (b) << SP << (c) << endl;
#define FOR(ii, m, n) for(int ii = m; ii < n; ++ii)
#define REP(ii, n) FOR(ii, 0, n)
#define FORD(ii, m, n) for(int ii = m; ii >= n; --ii)
#define REPD(ii, m) FORD(ii, m, 0)
#define PB push_back
#define MP(a, b) make_pair((a), (b))

//----------------------------------------------------------------------------------------------------------------------



//void run(int a[][2], int n){
//    a[n][0] = a[n - 1][0];
//    a[n][1] = a[n - 1][1];
//    switch( n % 4){
//        case 0 : a[n][1] -= n;  break;
//        case 1 : a[n][0] += n;  break;
//        case 2 : a[n][1] += n;  break;
//        case 3 : a[n][0] -= n;  break;
//    };
////    if(n < 20){
////        CO2(a[n][0], a[n][1])
////    }
//}

void run2(int a[2], int m){

    FOR(n, 1, m + 1)
    switch( n % 4){
        case 0 : a[1] -= n;  break;
        case 1 : a[0] += n;  break;
        case 2 : a[1] += n;  break;
        case 3 : a[0] -= n;  break;
    };
//    if(n < 20){
//        CO2(a[n][0], a[n][1])
//    }
}

//void initial(){
//    memset(table, 0, M);
//    FOR(ii, 1, M){
//        run(table, ii);
////        switch(n % 4){
////            case 0 : table[n][1] -= n;break;
////            case 1 : table[n][0] += n;break;
////            case 2 : table[n][1] += n;break;
////            case 3 : table[n][0] -= n;break;
////        };
//
//    }
//}


//-----------------------------------------  Main function  ------------------------------------------------------------
int main() {
    //TODO insert content


    int T, input;
    cin >> T;
    while(T--){
        cin >> input;
        int a[2];
        a[0] = 0;
        a[1] = 0;
        run2(a, input);
        CO2(a[0], a[1]);
    }

    return EXIT_SUCCESS;
}
//----------------------------------------------------------------------------------------------------------------------