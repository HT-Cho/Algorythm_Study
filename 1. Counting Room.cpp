/*
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

typedef long long ll;

long long nMod = 1000000007;
ll nHeight;
ll nWidth;

char arr[1001][1001];
bool varr[1001][1001];

/ *

	바닥 기호를 통해 왼쪽 오른쪽 위 아래 로 갈 수 있음

	Input 
	1. 높이 n, 넓이 m
	2. n줄의 m개의 문자 
		. -> 바닥
		# -> 벽

	Output
	하나의 정수 -> 방의 개수

	ex)
	5 8
	########
	#..#...#
	####.#.#
	#..#...#
	########

	3

	임의의 .타일을 root로 시작하여 끊어지지 않고 연결되는 경우의 수 구하는 문제

	그래프의 순회 

	.에서 전방향 다 움직일 수 있고 방문한 곳은 제외 시키기 계속 이동하다가 전후좌우 이동 불가 시 cnt++
	좌우 이동 1순위 상하 이동 2순위
* /

bool isVal(int x, int y)
{
	if(x < 0 || x >= nHeight || y < 0 || y >= nWidth)
		return false;

	if(varr[x][y] == true || arr[x][y] == '#')
		return false;

	return true;
}

void dfs(int x, int y)
{
	varr[x][y]= true;

	if(isVal(x - 1, y))
		dfs(x - 1, y);

	if(isVal(x, y + 1))
		dfs(x, y + 1);

	if(isVal(x + 1, y))
		dfs(x + 1, y);

	if(isVal(x, y - 1))
		dfs(x, y - 1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	cin >> nHeight >> nWidth;

	for(int i = 0; i < nHeight; i++)
	{
		for(int j = 0; j < nWidth; j++)
		{
			cin >> arr[i][j];
		}
	}

	int nCnt = 0;

	for(int i = 0; i < nHeight; i++)
	{
		for(int j = 0; j < nWidth; j++)
		{			
			if(arr[i][j] == '.' && varr[i][j] == false)
			{
				dfs(i, j);
				nCnt++;
			}
		}
	}

	cout << nCnt << '\n';
	return 0;
}*/