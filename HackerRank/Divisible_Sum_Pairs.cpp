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
#define CO2(a, b) cout << a << SP << b << endl;
#define CO3(a, b, c) cout << a << SP << b << SP << c << endl;


int main(){

    int n, k;
    cin >> n >> k;
    int a[n];
    REP(ii, n){
        cin >> a[ii];
    }
    int sum = 0;
    REP(ii, n){
        FOR(jj, ii + 1, n){
            // CO1(a[ii] + a[jj] )
            if((a[ii] + a[jj]) % k == 0){
                sum++;
            }
        }
    }
    CO1(sum);

    return 0;
}