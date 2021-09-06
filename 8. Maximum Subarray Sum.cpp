/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/ *
	input
	1. n -> 배열의 크기
	2. n개의 정수 배열값

	output
	최대 부분 배열 합계 하나의 정수

	8
	-1 3 -2 5 3 -5 2 2 

	9
* /
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nSize, nTmp;
	cin >> nSize;

	vector<ll> vec_Array;
	for(int i = 0; i < nSize; ++i)
	{
		cin >> nTmp;
		vec_Array.push_back(nTmp);
	}

	ll best = -1000000000, sum = -1000000000;
	for(int i = 0; i < vec_Array.size(); ++i)
	{
		sum = max(vec_Array[i], sum+vec_Array[i]);
		best = max(best, sum);
	}

	cout << best << "\n";

	return 0;
}*/