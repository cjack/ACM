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
    // should avoid v1 == v2
    // x1 + v1 * t == x2 + v2 * t
    // t = (x2 - x1) / (v1 - v2)
    // t should be positive and an integer

    int x1, v1, x2, v2;
    int x, v;
    string y = "YES", n = "NO";
    while(cin >> x1 >> v1 >> x2 >> v2){
        if(v1 == v2) {
            CO1(n);
            continue;
        }
        x = x2 - x1;
        v = v1 - v2;
        if(x / v < 0 || x % v != 0){
            CO1(n);
        }else{
            CO1(y);
        }
    }
    return 0;
}