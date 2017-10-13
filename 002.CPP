#include "stdafx.h"
#include <iostream>

#include "sstream"


int main()
{
	int *a; 
	int n; 
	int sum; 
			 
	cin » n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin » a[i];
	cin » sum;

	int lt = 0; 
	int rt = n - 1; 
	while (lt != rt)
	{
		int cursum = a[lt] + a[rt];
		if (cursum < sum)
			lt++;
		else if (cursum > sum)
			rt--;
		else // if (cursum == sum)
		{
			cout « "indexes: " « lt « " " « rt « endl;
			cout « "values: " « a[lt] « " " « a[rt] « endl;
			return 0;
		}
	}
	cout « "not found" « endl;
	return 0;
}

