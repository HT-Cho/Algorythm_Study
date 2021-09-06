/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
n���� �� ����, ��� �ð� ����, �ִ� ���� �� ���ϱ�

Input ���� n(�� ��)

Input ���� �����ϴ� n�� ���� a(�� ����) b(�� ���) -> ��� ���� �� ��� �ð��� �ٸ��ٰ� ����

Output
�ϳ��� ����(�ִ� �� ��) ��� (�ѹ��� ����ȿ� �ִ� �ִ� ����)

ex)
3
5 8    2 4  2 4     4 2
2 4    5 8  3 9     8 5 
3 9    3 9  5 8		9 3

2
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	

	ll nCnt, nStart, nEnd;
	cin >> nCnt;

	vector<pair<ll, bool>> vec_CustomerTime;
	for (int i = 0; i < nCnt; ++i)
	{
		cin >> nStart >> nEnd;

		vec_CustomerTime.push_back(pair<ll, bool>(nStart, true));
		vec_CustomerTime.push_back(pair<ll, bool>(nEnd, false));
	}

	sort(vec_CustomerTime.begin(), vec_CustomerTime.end());
	
	int nNow = 0, nMax = 0;
	for (int i = 0; i < vec_CustomerTime.size(); ++i)
	{
		if (vec_CustomerTime[i].second == true)
			nNow += 1;
		else
			nNow -= 1;

		nMax = max(nMax, nNow);
	}

	cout << nMax;

	return 0;
}*/