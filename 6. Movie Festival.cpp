/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/ *
	input 
	1. ��ȭ �� ���� n
	2. �ΰ��� ���� start = ��ȭ ���۽ð�, end = ��ȭ ���� �ð�

	output
	�ִ��� ���� �� �� �ִ� ��ȭ ����

	3
	3 5
	4 9
	5 8

	2
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nStart, nEnd;
	cin >> nCnt;

	vector<pair<ll, ll>> vec_MovieTime;	
	for(int i = 0; i < nCnt; ++i)
	{
		cin >> nStart >> nEnd;

		vec_MovieTime.push_back(pair<ll, ll>(nEnd, nStart));
	}

	sort(vec_MovieTime.begin(), vec_MovieTime.end());

	ll nMovieCnt = 0, nNow = 0;
	for(int i = 0; i < vec_MovieTime.size(); ++i)
	{
		if(nNow <= vec_MovieTime[i].second)
		{
			nNow = vec_MovieTime[i].first;
			++nMovieCnt;
		}
	}

	cout << nMovieCnt << "\n";
	return 0;
}*/