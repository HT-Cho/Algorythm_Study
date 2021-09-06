/*
#include <iostream>
#include <vector>
using namespace std;

long long nMinimumWeight = 1000000000;

void CompareWeight(int _nCnt, long long _Min, vector<int>_Apple);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int nInput;
	cin >> nInput;

	int nIndex = 0, nTmp;
	vector<int> vec_Apple;
	for(nIndex; nIndex < nInput; ++nIndex)
	{
		cin >> nTmp;
		vec_Apple.push_back(nTmp);
	}

	CompareWeight(0, 0, vec_Apple);

	cout << nMinimumWeight << "\n";

	return 0;
}

void CompareWeight(int _nCnt, long long _Min, vector<int>_Apple)
{
	if(_nCnt == _Apple.size())
	{
		if(nMinimumWeight > abs(_Min))
			nMinimumWeight = abs(_Min);

		return;
	}

	CompareWeight(_nCnt + 1, _Min + _Apple[_nCnt], _Apple);
	CompareWeight(_nCnt + 1, _Min - _Apple[_nCnt], _Apple);
}*/