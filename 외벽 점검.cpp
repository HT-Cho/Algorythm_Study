/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// �ܺ��� �� �ѷ��� n����(����)
// ��� ���� weak ��ģ���� 1�ð� ���� �̵��� �� �ִ� �Ÿ� dist
// ��� ������ �����ϱ� ���� ������ �ϴ� ģ�� �ּҰ�
// ģ�� ���� �����ص� ���� ���� �� �� ���� ��� -1

// ���� ���� ������ Ǯ�̸� ������ �ϱ� ���� ���̸� 2��� �÷� ���ڷ� ������ָ� ������
// ex 
// Input  1 3 4 9 10 -> 1 3 4 9 10 13 15 16 21 22(n == 12�� ��� �̱� ������ �ι�� �ø����� 12�� ������)
int solution(int n, vector<int> weak, vector<int> dist) 
{
	int answer = dist.size() + 1;

	int nLen = weak.size();
	for (int i = 0; i < nLen; ++i)
	{
		weak.push_back(weak[i] + n);
	}

	sort(dist.begin(), dist.end());
	for (int i = 0; i < nLen; ++i) 
	{
		do
		{
			for (int j = 0; j < dist.size(); ++j) 
			{
				int nCnt = 1;
				int nPos = weak[i] + dist[nCnt - 1];

				for (int index = i; index < i + nLen; ++index) 
				{
					if (nPos < weak[index]) 
					{
						++nCnt;
						if (nCnt > dist.size())
							break;

						nPos = weak[index] + dist[nCnt - 1];
					}
				}

				answer = min(answer, nCnt);
			}
		} while (prev_permutation(dist.begin(), dist.end()));
	}

	if (answer > dist.size())
		return -1;

	return answer;
}

int main() 
{
	int n = 12;
	//vector<int> weak = { 1, 3, 4, 9, 10 };
	//vector<int> dist = {3, 5, 7};

	vector<int> weak = { 1, 5, 6, 10 };
	vector<int> dist = { 1, 2, 3, 4 };

	cout << solution(n, weak, dist) << endl;
	
	cin >> n;

	return 0;
}*/