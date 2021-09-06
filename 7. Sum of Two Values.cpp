/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
n 개의 정수 배열이 주어지고, 당신의 임무는 합이 x 인 두 개의 값 (고유 한 위치에서)을 찾는 것입니다

첫 번째 입력 행에는 배열 크기와 목표 합이라는 두 개의 정수 n과 x가 있습니다. 
두 번째 줄에는 n 개의 정수 a1, a2,…, an : 배열 값이 있습니다. 

산출 두 개의 정수 (값의 위치)를 인쇄합니다. 해결책이 여러 개인 경우 그중 하나를 인쇄 할 수 있습니다. 해결책이 없으면 IMPOSSIBLE로 인쇄하십시오.

Input:
4 8
2 7 5 1

1 2 5 7

Output:
2 4
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nTargetSum, nTmp, nSum;
	cin >> nCnt >> nTargetSum;

	vector<pair<ll, ll>> vec_Target;
	
	for (int i = 0; i < nCnt; ++i) 
	{
		cin >> nTmp;
		vec_Target.push_back(make_pair(nTmp, i + 1));
	}

	sort(vec_Target.begin(), vec_Target.end());

	ll nLeft = 0, nRight = vec_Target.size() -1;

	bool bSuccess = false;



	/*
	while (nLeft < nRight) 
	{
		nTmp = vec_Target[nLeft].first + vec_Target[nRight].first;

		if (nTmp == nTargetSum) 
		{
			cout << vec_Target[nLeft].second << " " << vec_Target[nRight].second << "\n";
			bSuccess = true;
			break;
		}

		if (nTmp < nTargetSum)
			++nLeft;

		else
			--nRight;
	}

	if (!bSuccess)
		cout << "IMPOSSIBLE" << "\n";

	return 0;
}*/