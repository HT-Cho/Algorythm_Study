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
 Input 
 n개의 도시, m개의 도로
 두 도시 사이에 경로가 있도록 새로운 도로를 건설
 최소의 도로 개수, 어떤 도로

 도시번호 n ex) 1,2,...., n , 
 도로 설명 m줄, 각 줄에  두개의정수 a, b,

 풀어보자면 
 노드의 갯수가 n
 간선의 갯수 m
 간선으로 연결되는 노드의 정보가 a,b 이렇게 간다는건가

 모든 노드가 연결되기 위한 간선의 갯수 와 연결되는 노드 정보 출력 하라는 얘기 인듯
 
 4 2

 1 2 -> 1 에서 2로 가는 도로
 3 4 -> 3 에서 4로 가는 도로

 output
 1
 2 3
* /
ll nCityCnt = 0, nRoadCnt = 0;

void dfs(ll nPos, vector<vector<ll>> &_vec_Rode, vector<bool> &_vec_Visited)
{
	if(_vec_Visited[nPos])
		return;

	_vec_Visited[nPos] = true;

	for(int i = 0; i < _vec_Rode[nPos].size(); i++)
	{
		dfs(_vec_Rode[nPos][i], _vec_Rode, _vec_Visited);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);		

	cin >> nCityCnt >> nRoadCnt;

	vector<bool> vec_Visited(nCityCnt + 1);
	vector<vector<ll>> vec_Road(nCityCnt + 1);

	ll a, b;
	for(int i = 0; i < nRoadCnt; i++)
	{
		cin >> a >> b;
		vec_Road[a].push_back(b);
		vec_Road[b].push_back(a);
	}

	ll nCnt = 0;	
	vector<ll> vec_Result;
	for(int i = 1; i < vec_Road.size(); ++i)
	{
		if(vec_Visited[i] == false)
		{
			dfs(i, vec_Road, vec_Visited);			
			vec_Result.push_back(i);
			++nCnt;
		}			
	}	

	cout << nCnt - 1 << '\n';
	if(vec_Result.empty() == false)
	{
		for(int i = 0; i < vec_Result.size() - 1; ++i)
		{
			cout << vec_Result[i] << ' ' << vec_Result[i + 1] << '\n';
		}
	}

	return 0;
}*/