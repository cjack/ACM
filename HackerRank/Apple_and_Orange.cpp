#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define FOR(a, b, c) for(int a = b; a < c; a++ )
#define REP(a, b) FOR(a, 0, b)
#define FORD(a, b, c) for(int a = c; a >= b; a-- )
#define REPD(a, b) FOR(a, 0, b)
#define CO1(a) cout << a << endl;


int main() {
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int app = 0, org = 0, d;
    REP(ii, m){
        cin >> d;
        if(d > 0 && (a + d) >= s && (a + d) <= t){
            app++;
        }
    }
    REP(ii, n){
        cin >> d;
        if(d < 0 && (b + d) >= s && (b + d) <= t){
            org++;
        }
    }
    CO1(app);
    CO1(org);

    return 0;
}
