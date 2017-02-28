#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int
#define SP " "
#define FOR(a, b, c) for(int a = b; a < c; a++ )
#define REP(a, b) FOR(a, 0, b)
#define FORD(a, b, c) for(int a = c; a >= b; a-- )
#define REPD(a, b) FOR(a, 0, b)
#define CO1(a) cout << a << endl;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int a[26];
    string str;
    REP(ii, 26){
        cin >> a[ii];
    }
    cin >> str;
    int max = 0;
    int temp = 0;
    REP(ii, str.size()){
        temp = a[str[ii] - 'a'];
        if( temp > max) max = temp;
    }
    CO1(max * str.size());

    return 0;
}