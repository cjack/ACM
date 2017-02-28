

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

string reverse(string s){
    string ss = "";
    FORD(ii, s.size() - 1, 0){
        ss.append(1, s[ii]);
    }
    return ss;
}


string Add(string mA, string mB){
    string A, B;
    if(mA.size() >= mB.size()){
        A = mA;
        B = mB;
    }else{
        A = mB;
        B = mA;
    }
    if(B.compare("0") == 0) return A;

    A = reverse(A);
    B = reverse(B);
    char res[A.size() + 10];
    int c = 0;
    int ii = 0;

    for(ii = 0; ii < B.size(); ++ii) {
        //add two char and the c
        res[ii] = (A[ii] - '0' + B[ii]) + c;

        c = 0;
        if (int(res[ii] - '0') >= 10) {



            res[ii] = res[ii] - 10 ;
            c = 1;
        }

    }
        while(c == 1 && ii < A.size()){
            res[ii] = A[ii] + c;
            c = 0;
            if(int (res[ii] - '0') >= 10) {
                res[ii] -= 10;
                c = 1;
            }

            ii++;
        }

        if(ii >= A.size() && c == 1){
            res[ii] = '1';
            ii++;
        }
    res[ii] = '\0';

    string rr(res);
    //be care not to exceed the spectrum of A and B
    if(A.size() > B.size() && ii < A.size()){
        rr.append(A.substr(ii, A.size() - 1));
    }
    return reverse(rr);
}

string multi_single(string A, char B){
    if(A.compare("0") == 0 || B == '0') return "0";
    A = reverse(A);
    char res[A.size() + 10];
    int c = 0;
    int m = B - '0';
    int ii = 0;
    for(ii = 0; ii < A.size(); ii++){
        res[ii] = (A[ii] - '0') * m + c;
        c = 0;
        if(res[ii] >= 10){
            c = res[ii] / 10;
            res[ii] =  (res[ii] % 10) + '0';
        }else{
            res[ii] += '0';
        }
    }
    if(c != 0){
        res[ii] = c + '0';
        ii++;
    }
    res[ii] = '\0';
    string rr(res);
    return reverse(rr);
}

string multi(string mA, string mB){
    //To ensure the length of A is not less than B
    string A, B;

    if(mA.size() >= mB.size()){
        A = mA;
        B = mB;
    }else{
        A = mB;
        B = mA;
    }
    B = reverse(B);
    string C = "0", temp;
    int ii;
    for(ii = 0; ii < B.size(); ++ii){
        temp = multi_single(A, B[ii]);
        C = Add(C, temp);
        A = A.append(1, '0');
    }

    return C;
}

int main() {
   int N;
   string s = "1";
   while(cin >> N){
       s = "1";
       FOR(ii, 2, N + 1){
           s = multi(s, to_string(ii));
       }
       CO1(s);
   }


    return EXIT_SUCCESS;
}