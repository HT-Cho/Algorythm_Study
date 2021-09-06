/*#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
/*
���� ����
�����ڴ� ������ ������ ����� �ظ��Դϴ�. ������ ���ι��� ���ǰ�翡 ���� ������ ���� ������ �մϴ�. �����ڴ� 1�� �������� ������ �������� ������ ���� ����ϴ�.

1�� �����ڰ� ��� ���: (1, 2, 3, 4, 5), 1, 2, 3, 4, 5, ...
2�� �����ڰ� ��� ���: (2, 1, 2, 3, 2, 4, 2, 5), 2, 1, 2, 3, 2, 4, 2, 5, ...
3�� �����ڰ� ��� ���: (3, 3, 1, 1, 2, 2, 4, 4, 5, 5), 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1�� �������� ������ ���������� ������ ������� ���� �迭 answers�� �־����� ��, ���� ���� ������ ���� ����� �������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
������ �ִ� 10,000 ������ �����Ǿ��ֽ��ϴ�.
������ ������ 1, 2, 3, 4, 5�� �ϳ��Դϴ�.
���� ���� ������ ���� ����� ������ ���, return�ϴ� ���� �������� �������ּ���.
����� ��
answers	return
[1,2,3,4,5]	[1]
[1,3,2,4,2]	[1,2,3]
����� �� ����
����� �� #1

������ 1�� ��� ������ �������ϴ�.
������ 2�� ��� ������ Ʋ�Ƚ��ϴ�.
������ 3�� ��� ������ Ʋ�Ƚ��ϴ�.
���� ���� ������ ���� ���� ����� ������ 1�Դϴ�.

����� �� #2

��� ����� 2�������� ������ϴ�.
* /

vector<int> solution(vector<int> answers) {
    vector<int> answer;

	vector<int> first, second, third;
	first = { 1,2,3,4,5 };
	second = { 2, 1, 2, 3, 2, 4, 2, 5 };
	third = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };	

	vector<pair<int, int>> ret;
	ret.push_back(make_pair<int, int>(0, 1));
	ret.push_back(make_pair<int, int>(0, 2));
	ret.push_back(make_pair<int, int>(0, 3));

	int nAnswer, n;
	for (int i = 0; i < answers.size(); ++i) 
	{
		nAnswer = answers[i];
		n = first[i % first.size()];
		if (nAnswer == n)
			ret[0].first++;

		n = second[i % second.size()];
		if (nAnswer == n)
			ret[1].first++;

		n = third[i % third.size()];
		if (nAnswer == n)
			ret[2].first++;
	}

	sort(ret.begin(), ret.end(), greater<pair<int, int>>());

	for (int i = 0; i < 3; ++i) 
	{
		if(i == 0)
			answer.push_back(ret[i].second);

		else 
		{
			if (ret[i - 1].first == ret[i].first)
				answer.push_back(ret[i].second);

			else
				break;
		}
	}

	sort(answer.begin(), answer.end());
	
    return answer;
}

void main()
{
	vector<int> answer;
	answer = { 1,3,2,4,2 };

	vector<int> vecResult = solution(answer);
	
	for(int i = 0; i < vecResult.size(); ++i)
	{
		cout << vecResult[i] << '\t';
	}

	cout << "\n";
}*/