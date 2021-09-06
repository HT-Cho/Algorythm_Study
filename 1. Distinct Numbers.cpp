/*
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

typedef unsigned long long ll;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt;
	cin >> nCnt;

	set<ll> setTest;
	int ntmp;
	for(int i = 0; i < nCnt; i++)
	{
		cin >> ntmp;
		setTest.insert(ntmp);
	}
	/*vector<ll> vec_Input;	
	ll nIndex = 0, nTmp;
	for(nIndex; nIndex < nCnt; ++nIndex)
	{
		cin >> nTmp;
		vec_Input.push_back(nTmp);
	}

	sort(vec_Input.begin(), vec_Input.end());
	vec_Input.erase(unique(vec_Input.begin(), vec_Input.end()), vec_Input.end());

	cout << vec_Input.size() << "\n";* /
	cout << setTest.size() << "\n";
	return 0;
}*/