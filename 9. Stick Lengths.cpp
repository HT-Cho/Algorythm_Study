/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
약간의 길이를 가진 n 개의 막대기가 있습니다. 
당신의 임무는 각 막대기가 같은 길이를 갖도록 막대기를 수정하는 것입니다. 
각 스틱을 늘리거나 줄일 수 있습니다. 두 작업의 비용은 x입니다. 여기서 x는 새 길이와 원래 길이의 차이입니다. 
최소 총 비용은 얼마입니까? 

입력 
첫 번째 입력 줄에는 정수 n (스틱 개수)이 포함됩니다. 
그리고 n 개의 정수가 있습니다 : p1, p2,…, pn : 막대기의 길이. 

산출 
하나의 정수 (최소 총 비용)를 인쇄하십시오.

Example

Input:
5
2 3 1 5 2

Output:
5
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nTmp;
	vector<ll> vec_Sticklen;
	cin >> nCnt;

	for (int i = 0; i < nCnt; ++i) 
	{
		cin >> nTmp;
		vec_Sticklen.push_back(nTmp);
	}

	sort(vec_Sticklen.begin(), vec_Sticklen.end());

	ll nMid = vec_Sticklen[nCnt / 2];

	ll nResult = 0;
	for (int i = 0; i < nCnt; ++i) 
	{
		nResult += abs(vec_Sticklen[i] - nMid);
	}

	cout << nResult << '\n';

	return 0;
}*/