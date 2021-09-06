/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	����� �ٴ� ���� �ְų� ���� ���� ���κ����� �ְų� �Ǵٸ� ��� ���� �־�� ��
	���� ���� ���κ��� ������� �̰ų� �Ǵ� ���� ���κ��� �ٸ� ���� ���ÿ� ���� �Ǿ� �־�� ��

	build_frame = {x, y, a, b}
	x, y�� ���, ���� ��ġ�� �������� ��ǥ (����, ����)
	a�� ��ġ �Ǵ� ������ ������ 0�� ��� 1�� ��
	b �� ��ġ ���� ���� 0�� ����, 1�� ��ġ
	�������� ��ġ �ϴ� ��� ����
	�ٴڿ� �� ��ġ ����

	���� ������ ����� ���� ���� ��ġ ���� ����
	������ ��ġ���� ��ġ�ϰų� ���� �������� �����ϴ� �Է��� ����
	����������
	���α��̰� 3�� 2���� �迭 �� �������� ��ǥ�� ��� �־�� ��
	return = {x, y, a} x, y�� ��ǥ a�� �������� ���� 0�� ��� 1�� ��
	x��ǥ ���� ������������ �����ϸ� x�� ������� y�� �������� ����
	x y�� ��� ������ ����� ������
* /

//�ùٸ� ��ġ / ���� ��� ���� Ȯ�� �ϴ� �Լ�
// ���� x ���� y �ǹ� ���� a(0���, 1��)
bool Is_Correct_Build(vector<vector<int>> vec_Buildtmp, vector<int> vec_buildInfo)
{
	// ��ġ
	int ntmp, ntmp2, ntmp3;
	ntmp = vec_buildInfo[0];
	ntmp2 = vec_buildInfo[1];
	ntmp3 = vec_buildInfo[3];
			
	//���
	//����� �ٴ� ���� �ְų� ���� ���� ���κ����� �ְų� �Ǵٸ� ��� ���� �־�� ��
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

				//��
				//���� ���� ���κ��� ������� �̰ų� �Ǵ� ���� ���κ��� �ٸ� ���� ���ÿ� ���� �Ǿ� �־�� ��
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