/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
n명의 고객 도착, 출발 시간 제공, 최대 고객의 수 구하기

Input 정수 n(고객 수)

Input 고객을 설명하는 n줄 각줄 a(고객 도착) b(고객 출발) -> 모든 도착 및 출발 시간이 다르다고 가정

Output
하나의 정수(최대 고객 수) 출력 (한번에 매장안에 있는 최대 고객수)

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