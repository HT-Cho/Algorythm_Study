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

	�ٴ� ��ȣ�� ���� ���� ������ �� �Ʒ� �� �� �� ����

	Input 
	1. ���� n, ���� m
	2. n���� m���� ���� 
		. -> �ٴ�
		# -> ��

	Output
	�ϳ��� ���� -> ���� ����

	ex)
	5 8
	########
	#..#...#
	####.#.#
	#..#...#
	########

	3

	������ .Ÿ���� root�� �����Ͽ� �������� �ʰ� ����Ǵ� ����� �� ���ϴ� ����

	�׷����� ��ȸ 

	.���� ������ �� ������ �� �ְ� �湮�� ���� ���� ��Ű�� ��� �̵��ϴٰ� �����¿� �̵� �Ұ� �� cnt++
	�¿� �̵� 1���� ���� �̵� 2����
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