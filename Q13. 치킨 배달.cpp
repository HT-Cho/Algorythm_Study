/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/ *
	집 (2,1) 치킨집(1,2) 의 거리	(2-1) + (1-2)

	input
	n개의 도시정보, m개의 치킨집

	집은 2N개를 넘지 않고 m은 13까지

	폐업시키지 않을 치킨집 최대 m개를 골랐을때 치킨거리 최소값
* /

int n, m, ans = 10000000009;
//, vec_Target;

/ *
int getChikenLength()
{
	int nResult = 0, nTmp;

	for(int i = 0; i < vec_HomeInfo.size(); ++i)
	{
		nTmp = 10000000009;
		for(int j = 0; j < vec_Target.size(); ++j)
		{
			nTmp = min(nTmp, abs(vec_HomeInfo[i].first - vec_Target[j].first) + abs(vec_HomeInfo[i].second - vec_Target[j].second));
		}
		nResult += nTmp;
	}

	return nResult;
}* /

/ *
void DFS(int x, int y)
{
	if( y >= m)
	{
		int nTmp = getChikenLength();

		ans = min(ans, nTmp);

		return;
	}

	for(int i = x; i < vec_ChikenInfo.size(); ++i)
	{
		vec_Target.push_back(vec_ChikenInfo[i]);
		DFS(i + 1, y + 1);
		vec_Target.pop_back();
	}
}* /

void main()
{
	cin >> n >> m;

	int nTmp;
	vector<vector<int>> vec_CityInfo(n, vector<int>(n, 0));
	vector<pair<int, int>> vec_HomeInfo, vec_ChikenInfo;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> vec_CityInfo[i][j];

			if(vec_CityInfo[i][j] == 1)
				vec_HomeInfo.push_back(make_pair(i, j));

			if(vec_CityInfo[i][j] == 2)
				vec_ChikenInfo.push_back(make_pair(i, j));
		}
	}

	vector<int> vecTmp(vec_ChikenInfo.size(), 0);
	vector<pair<int, int>> vec_ComTmp;

	vector<vector<pair<int, int>>> vec_Target;
	for(int i = 0; i < m; ++i)
	{
		vecTmp[i] = 1;
	}
	do
	{
		for(int i = 0; i < vecTmp.size(); ++i)
		{
			if(vecTmp[i] == 1)
				vec_ComTmp.push_back(vec_ChikenInfo[i]);
		}

		vec_Target.push_back(vec_ComTmp);

		vec_ComTmp.clear();
	} while (prev_permutation(vecTmp.begin(), vecTmp.end()));


	int nResult, nTmp2 = 1000000009, ans = 1000000009;
	for(int k = 0; k < vec_Target.size(); ++k)
	{
		nResult = 0;
		for(int i = 0; i < vec_HomeInfo.size(); ++i)
		{
			nTmp2 = 1000000009;
			for(int j = 0; j < vec_Target[k].size(); ++j)
			{
				nTmp2 = min(nTmp2, abs(vec_HomeInfo[i].first - vec_Target[k][j].first) + abs(vec_HomeInfo[i].second - vec_Target[k][j].second));
			}

			nResult += nTmp2;
		}

		ans = min(ans, nResult);
	}




	//DFS(0, 0);
	cout << ans << '\n';
}*/