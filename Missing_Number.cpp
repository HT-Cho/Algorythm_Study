/*
#include <iostream>
#include <BaseTsd.h>
using namespace std;

int main()
{	
	UINT64 n;
	cin >> n;
	
	UINT64 nMAX = 0, nSum = 0, nInput = 0;
	
	nMAX =(n*(n+1))/2;	
	
	for(int nCnt = 1; nCnt <= n-1; ++nCnt)
	{
		cin >> nInput;

		nSum += nInput;
	}

	cout << nMAX - nSum << '\n';

	return 0;
}*/