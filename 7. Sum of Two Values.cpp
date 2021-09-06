/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
n ���� ���� �迭�� �־�����, ����� �ӹ��� ���� x �� �� ���� �� (���� �� ��ġ����)�� ã�� ���Դϴ�

ù ��° �Է� �࿡�� �迭 ũ��� ��ǥ ���̶�� �� ���� ���� n�� x�� �ֽ��ϴ�. 
�� ��° �ٿ��� n ���� ���� a1, a2,��, an : �迭 ���� �ֽ��ϴ�. 

���� �� ���� ���� (���� ��ġ)�� �μ��մϴ�. �ذ�å�� ���� ���� ��� ���� �ϳ��� �μ� �� �� �ֽ��ϴ�. �ذ�å�� ������ IMPOSSIBLE�� �μ��Ͻʽÿ�.

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