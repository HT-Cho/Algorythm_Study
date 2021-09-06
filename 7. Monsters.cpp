/*#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

long long nMod = 1000000007;
ll nHeight = 1000;
ll nWidth = 1000;

/*

지도의 높이와 넓이 입력 n, m

# = 벽 . = 길 A = 시작점 M = 몬스터
괴물을 마주치지 않고 탈출 가능 한지 확인
가능 하다면 몇번 칸을 옮겨야 하는지 출력 후
이동한 방향 출력
R = 오른쪽 D = 아래쪽 L = 왼쪽 U = 위쪽

유효 경로 최대 길이 

Input
5 8
########
#M..A..#
#.#.M#.#
#M#..#..
#.######

Output
YES
5
RRDDR

만약에 M을 미리 움직일 수 있는 모든 공간으로 번식 시켜놓으면
A가 움직일 수 있는 경로를 만들 수 있지 않을까....
어차피 n,m 1000이 제한이다

A 좌표 미리 저장
M별로 움직일 수 있는 공간 미리 선점
A를 지나치거나 #을 넘어 서지 않고 움직 일 수 있는 공간이여야만 함

그러고 나서 A로 길찾기 가장 위, 왼쪽, 오른쪽, 아래쪽 좌표 움직 일 수 있을때 true


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

	return 0;
}*/