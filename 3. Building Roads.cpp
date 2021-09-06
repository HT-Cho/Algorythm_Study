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
 n���� ����, m���� ����
 �� ���� ���̿� ��ΰ� �ֵ��� ���ο� ���θ� �Ǽ�
 �ּ��� ���� ����, � ����

 ���ù�ȣ n ex) 1,2,...., n , 
 ���� ���� m��, �� �ٿ�  �ΰ������� a, b,

 Ǯ��ڸ� 
 ����� ������ n
 ������ ���� m
 �������� ����Ǵ� ����� ������ a,b �̷��� ���ٴ°ǰ�

 ��� ��尡 ����Ǳ� ���� ������ ���� �� ����Ǵ� ��� ���� ��� �϶�� ��� �ε�
 
 4 2

 1 2 -> 1 ���� 2�� ���� ����
 3 4 -> 3 ���� 4�� ���� ����

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