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
    // be careful about All elements in A are factors of x.
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    REP(ii, n){
        cin >> a[ii];
    }

    REP(jj, m){
        cin >> b[jj];
    }

    int sign = 0, sum = 0;
    FOR(ii, a[n - 1], b[0] + 1){
        sign = 0;
        REP(jj, m){
            if(b[jj] % ii != 0) {
                sign = 1;
                break;
            }
        }
        REP(kk, n){
            if(ii % a[kk] != 0) {
                sign = 1;
                break;
            }
        }
        if(sign == 0) {
            sum ++;
            // CO1(ii)
        }
    }
    cout << sum << endl;
    return 0;
}
