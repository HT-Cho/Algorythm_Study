
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
using namespace std;

typedef long long ll;
long long INF = 1e18;

/*
3개의 정수 입력 n = 도시 m = 도로 q = 쿼리수

도로설명 m줄 각줄 당 3개의 정수 a, b, c(도시 a와 b 사이에는 길이가 c인 도로가 있다. 모든 도로는 양방향)
쿼리 설명 q줄 각줄 당 두개의 정수 a,b(a와 b의 최단 경로 길이 결정

각 쿼리마다 가장 짧은 경로 출력 경로가 없을 때 -1 출력

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
1. 양방향 가중그래프 사용해서 최단경로 구하는 로직 사용 하면 될듯



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