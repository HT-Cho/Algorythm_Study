/*
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

long long nMod = 1000000007;
/ *
 n 명의 학생 그들 사이에 m명의 친구

 input n, m

 5 3
 1 2
 1 3
 4 5

 1 2 2 1 2

 노드 연결성 확인 연결 안되어 있는 노드 끼리 붙이기?

 그래푸 이분성 확인 이분 그래프가 아니라면 IMPOSSIBLE 출력

 graph A

 Node
 1 - 2, 3
 2 - 1
 3 - 1
 4 - 5
 5 - 4
* /

ll nNode = 0, nEdge = 0;

void dfs(ll nPos, ll nCnt, vector<vector<ll>> &_vec_Rode, vector<ll> &_vec_Visited, bool &_bPosibble)
{

	ll nColor;

	if(nCnt % 2 == 1)
		nColor = 1;
	else
		nColor = 2;	

	if(_vec_Visited[nPos] != 0)
	{
		// 여기에 색 확인 ?
		if(nColor != _vec_Visited[nPos])
			_bPosibble = false;

		return;
	}		

	_vec_Visited[nPos] = nColor;

	++nCnt;
	for(int i = 0; i < _vec_Rode[nPos].size(); i++)
	{		
		dfs(_vec_Rode[nPos][i], nCnt, _vec_Rode, _vec_Visited, _bPosibble);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);			

	cin >> nNode >> nEdge;
	
	vector<ll> vec_Visited(nNode + 1);
	vector<vector<ll>> vec_Road(nNode + 1);	

	ll nStart, nEnd;
	for(int i = 0; i < nEdge; ++i)
	{
		cin >> nStart >> nEnd;

		vec_Road[nStart].push_back(nEnd);
		vec_Road[nEnd].push_back(nStart);
	}

	ll nCnt = 1;
	bool bPosibble = true;
	for(int i = 1; i < vec_Road.size(); ++i)
	{
		if(vec_Visited[i] == 0)
		{
			nCnt = 1;
			dfs(i, nCnt, vec_Road, vec_Visited, bPosibble);	
		}			
	}	

	if(bPosibble == false)
	{
		cout << "IMPOSSIBLE";
	}

	else
	{
		for(int i = 1; i < vec_Visited.size(); ++i)
		{
			cout << vec_Visited[i] << ' ';
		}
	}	

	cout << '\n';
	
	return 0;
}*/