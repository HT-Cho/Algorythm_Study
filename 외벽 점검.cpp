/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 외벽의 총 둘레는 n미터(원형)
// 취약 지점 weak 각친구가 1시간 동안 이동할 수 있는 거리 dist
// 취약 지점을 점검하기 위해 보내야 하는 친구 최소값
// 친구 전부 투입해도 전부 점검 할 수 없는 경우 -1

// 원형 구성 문제는 풀이를 간단히 하기 위해 길이를 2배로 늘려 일자로 만들어주면 유리함
// ex 
// Input  1 3 4 9 10 -> 1 3 4 9 10 13 15 16 21 22(n == 12일 경우 이기 때문에 두배로 늘릴때는 12를 더해줌)
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