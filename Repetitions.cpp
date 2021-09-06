/*
#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 1000000

int main()
{
	string strInput;

	getline(cin, strInput);

	if(strInput.size() > MAX_SIZE)
		return 0;

	int nMaxRepetition = 1;
	for(int n = 1; n < strInput.size(); ++n)
	{
		if(strInput[n] == strInput[n-1])
			++nMaxRepetition;
		else
			nMaxRepetition = 0;
	}

	cout << nMaxRepetition << '\n';
	return 0;
}*/