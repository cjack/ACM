#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
	char A[] = "VWXYZABCDEFGHIJKLMNOPQRSTU";
	string str;
	while(1){
		cin>>str;
		if(str == "ENDOFINPUT") return 0;
		if(str == "START"){
			cin.ignore();
			getline(cin, str);
			for(int i = 0; i < str.length(); i++){
				if(str[i] >= 'A' && str[i] <= 'Z'){
					cout<<A[str[i] - 'A'];

				}else{
					cout<<str[i];
				}

			}
			cout<<endl;
		}
		if(str == "END") continue;
	}


	cout<<"ENDOFINPUT"<<endl;
	return 0;
}
