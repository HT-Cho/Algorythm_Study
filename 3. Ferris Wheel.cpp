/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
	input 
	1. �ΰ��� ���� n = �ڽ��� ��, x = �ִ� ���ġ
	2. n���� ���� �� �ڽ��� ����ġ

	output
	�ּ��� �ﵹ�� ��

	ex)
	input
	4 10
	7 2 3 9

	2 3 7 9

	output
	3
* /


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nMax, nAddWeight, nChildWeight = 0, nGondola = 0;
	cin >> nCnt >> nMax;

	vector<ll> vec_AddWeight;
	vector<ll>::iterator vec_IT_AddWeight;
	for(int i = 0; i < nCnt; ++i)
	{
		cin >> nAddWeight;
		vec_AddWeight.push_back(nAddWeight);
	}

	sort(vec_AddWeight.begin(), vec_AddWeight.end());	

	ll nLeft = 0, nRight = nCnt - 1;

	while (nLeft <= nRight) 
	{
		if (vec_AddWeight[nLeft] + vec_AddWeight[nRight] > nMax)
			nRight--;

		else 
		{
			nLeft++;
			nRight--;
		}

			nGondola++;
	}

	cout << nGondola << "\n";
	
	return 0;
}*/