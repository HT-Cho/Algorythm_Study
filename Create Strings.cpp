/*
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string strInput;
	cin >> strInput;

	sort(strInput.begin(), strInput.end());

	vector<string> vec_strOutput;
	vector<string>::iterator vec_IT_strOutput;
	do 
	{
		vec_strOutput.push_back(strInput);
	} while (next_permutation(strInput.begin(), strInput.end()));

	cout << vec_strOutput.size() << "\n";

	vec_IT_strOutput = vec_strOutput.begin();

	do 
	{
		cout << *vec_IT_strOutput << "\n";
		++vec_IT_strOutput;
	} while (vec_IT_strOutput != vec_strOutput.end());
	
	return 0;
}*/