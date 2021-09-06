
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
using namespace std;

typedef long long ll;
long long INF = 1e18;

/*
3���� ���� �Է� n = ���� m = ���� q = ������

���μ��� m�� ���� �� 3���� ���� a, b, c(���� a�� b ���̿��� ���̰� c�� ���ΰ� �ִ�. ��� ���δ� �����)
���� ���� q�� ���� �� �ΰ��� ���� a,b(a�� b�� �ִ� ��� ���� ����

�� �������� ���� ª�� ��� ��� ��ΰ� ���� �� -1 ���

Input
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2

Output
5
5
8
-1
3


Tip
1. ����� ���߱׷��� ����ؼ� �ִܰ�� ���ϴ� ���� ��� �ϸ� �ɵ�



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	

	ll nCityCnt = 0, nRoadCnt = 0, nQueryCnt = 0;
	ll nStart, nEnd, nRoadLength;
	cin >> nCityCnt >> nRoadCnt >> nQueryCnt;


	vector<ll>	vec_tmp;
	vector<make_tuple>
	vector<vector<ll>> vec_ShortestRoad(nCityCnt, vector<ll>(nCityCnt, INF));
	for (int i = 0; i < nRoadCnt; ++i) 
	{
		cin >> nStart >> nEnd >> nRoadLength;

		--nStart;
		--nEnd;

		if (nRoadLength < vec_ShortestRoad[nStart][nEnd])
			vec_ShortestRoad[nStart][nEnd] = nRoadLength;
	}



	for (int i = 0; i < nCityCnt; ++i) 
	{
		for (int j = 0; j < nCityCnt; ++j) 
		{
			for (int k = j + 1; k < nCityCnt; ++k) 
			{
				if (vec_ShortestRoad[j][i] + vec_ShortestRoad[i][k] < vec_ShortestRoad[j][k])
					vec_ShortestRoad[j][k] = vec_ShortestRoad[k][j] = vec_ShortestRoad[j][i] + vec_ShortestRoad[i][k];
			}
		}
	}

	while (nQueryCnt--) 
	{
		cin >> nStart >> nEnd;
		--nStart;
		--nEnd;

		if (nStart == nEnd)
			vec_ShortestRoad[nStart][nEnd] = 0;
		if (vec_ShortestRoad[nStart][nEnd] == INF)
			vec_ShortestRoad[nStart][nEnd] == -1;

		cout << vec_ShortestRoad[nStart][nEnd] << '\n';
	}

	return 0;
}*/