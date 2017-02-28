#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    const int MMAX = 5;
    long long int a[MMAX];
    for(int ii = 0; ii < MMAX; ii++){
        cin >> a[ii];

    }
    sort(a, a + MMAX);
    long long int sum = 0;
    for(int ii = 0; ii < MMAX; ii++){
       sum += a[ii];
    }
    cout << sum - a[MMAX - 1] << " " << sum - a[0] << endl;

    return 0;
}
