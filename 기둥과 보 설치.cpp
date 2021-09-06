/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	기둥은 바닥 위에 있거나 보의 한쪽 끝부분위에 있거나 또다른 기둥 위에 있어야 함
	보는 한쪽 끝부분이 기둥위에 이거나 또는 양쪽 끝부분이 다른 보와 동시에 연결 되어 있어야 함

	build_frame = {x, y, a, b}
	x, y는 기둥, 보를 설치할 교차점의 좌표 (가로, 세로)
	a는 설치 또는 삭제할 구조물 0은 기둥 1은 보
	b 는 설치 삭제 유무 0은 삭제, 1을 설치
	벽면벗어나게 설치 하는 경우 없음
	바닥에 보 설치 안함

	보는 오른쪽 기둥은 위쪽 으로 설치 방향 고정
	구조물 겹치도록 설치하거나 없는 구조물을 삭제하는 입력은 없음
	최종구조물
	가로길이가 3인 2차원 배열 각 구조물의 좌표를 담고 있어야 함
	return = {x, y, a} x, y는 좌표 a는 구조물의 종류 0은 기둥 1은 보
	x좌표 기준 오름차순으로 정렬하며 x가 같은경우 y로 오름차순 정렬
	x y가 모두 같으면 기둥이 앞으로
* /

//올바른 설치 / 제거 명령 인지 확인 하는 함수
// 가로 x 세로 y 건물 종류 a(0기둥, 1보)
bool Is_Correct_Build(vector<vector<int>> vec_Buildtmp, vector<int> vec_buildInfo)
{
	// 설치
	int ntmp, ntmp2, ntmp3;
	ntmp = vec_buildInfo[0];
	ntmp2 = vec_buildInfo[1];
	ntmp3 = vec_buildInfo[3];
			
	//기둥
	//기둥은 바닥 위에 있거나 보의 한쪽 끝부분위에 있거나 또다른 기둥 위에 있어야 함
	bool result = false;

	for (int x = 1; x < vec_Buildtmp.size(); ++x) 
	{
		for (int y = 0; y < vec_Buildtmp[x].size(); ++y) 
		{
			if (vec_Buildtmp[x][y] < 3) 
			{
				if (vec_Buildtmp[x][y] == 0)
				{
					if (y == 0 || vec_Buildtmp[x-1][y] == 1 || vec_Buildtmp[x][y] == 1 || vec_Buildtmp[x][y-1] == 0)
					{
						result = true;
					}

					else
						return false;
				}

				//보
				//보는 한쪽 끝부분이 기둥위에 이거나 또는 양쪽 끝부분이 다른 보와 동시에 연결 되어 있어야 함
				else
				{		
					if (vec_Buildtmp[x][y - 1] == 0 || vec_Buildtmp[x + 1][y - 1] == 0 || (vec_Buildtmp[x - 1][y] == 1 && vec_Buildtmp[x + 1][y] == 1))
					{
						result = true;
					}

					else
						return false;
				}
			}
			
		}
	}	
	return result;
}

vector<vector<int>> solution(int n, vector<vector<int>> build_frame) 
{
	vector<vector<int>> answer;

	int x, y, a, b;

	vector<int> vec_tmp(3);
	vector<vector<int>> vec_Buildtmp(n + 2, vector<int>(n + 1, 3));
	
	int nCnt = 0;
	//
	for (int i = 0; i < build_frame.size(); ++i) 
	{	
		if (build_frame[i][3] == 1) 
		{
			vec_Buildtmp[build_frame[i][0] + 1][build_frame[i][1] + 1] = build_frame[i][2];
			vec_tmp = { build_frame[i][0], build_frame[i][1], build_frame[i][2] };
					
			if (Is_Correct_Build(vec_Buildtmp, build_frame[i]) == true) 
			{
				answer.push_back(vec_tmp);
			}				
		}

		else 
		{
			vec_Buildtmp[build_frame[i][0] + 1][build_frame[i][1] + 1] = 3;
			vec_tmp = { build_frame[i][0], build_frame[i][1], build_frame[i][2] };

			if (Is_Correct_Build(vec_Buildtmp, build_frame[i]) == true)
			{
				answer.erase(remove(answer.begin(), answer.end(), vec_tmp));
			}			
		}		
	}

	sort(answer.begin(), answer.end());

	return answer;
}

int main() 
{
	//vector<vector<int>> build_frame = { {0, 0, 0, 1}, {2, 0, 0, 1}, {4, 0, 0, 1}, {0, 1, 1, 1}, {1, 1, 1, 1}, {2, 1, 1, 1}, {3, 1, 1, 1}, {2, 0, 0, 0}, {1, 1, 1, 0}, {2, 2, 0, 1} };

	vector<vector<int>> build_frame = { {1, 0, 0, 1}, {1, 1, 1, 1}, {2, 1, 0, 1}, {2, 2, 1, 1}, {5, 0, 0, 1}, {5, 1, 0, 1}, {4, 2, 1, 1}, {3, 2, 1, 1}};

	vector<vector<int>> result;

	result = solution(5, build_frame);

	for (int i = 0; i < result.size(); ++i) 
	{
		for (int j = 0; j < result[i].size(); ++j) 
		{
			cout << result[i][j] << '\t';
		}

		cout << '\n';
	}

	int n;
	cin >> n;

	return 0;
}*/