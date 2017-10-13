#include "stdafx.h"

#include <iostream>

#include "iostream"

#include "sstream"

using namespace std;

const int MAX = 80;

char buffer[MAX] = { 0 };




void eatspaces(char* str)

{
	cin.getline(buffer, sizeof buffer);
	for (string string; getline(cin, string); ) {

		istringstream stream(string);

		int i = 0;                          
		int j = 0;                      

		while ((*(str + i) = *(str + j++)) != '\0') { 

			if (*(str + i) != ' ')

				i++;
			else if (*(str + i) == ' ') {
				*(str + i) == '%20';

			}


			return;
		}
	}
}
int main()
{
	cout << buffer[MAX] << endl;
	
}
