#include <iostream>

#include "sstream"



using namespace std;



int main() {
    int n=10;
	int  s[n],x[n],z[20];



	for (string string; getline(cin, string); ) {

		istringstream stream(string);

	

		for (int i = 0; i < 10; ++i) {
			int j = ++i;
				if((s[j] < s[i])||	(x[j]<x[i])) {
				cout << "smb do not let to be glad" << endl;
			}


		for ( int i=0; i<20; i++) {
		    if(s[i]<x[i])
		    {z[i/2]=s[i];
		    z[i]=x[i];}
		    
    
    }
    }

	}
	cout << z<< endl;
	return 0;
	
	}
