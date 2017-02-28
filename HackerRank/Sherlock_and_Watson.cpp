
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

    int N = 0, K = 0, Q = 0;
    int t = 0, ii = 0, jj = 0;
    cin >> N >> K >> Q;
    long long int a[N];
    for(ii = 0; ii < N; ii++){
        cin >> a[ii];
    }


    for(jj = 0; jj < Q; jj++){
        cin >> t;
        t = t - K;
        while(t < 0) t = t + N;
        cout << a[t] << endl;
    }

    return 0;
}