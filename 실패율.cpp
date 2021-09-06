/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/ *
�������� ������ ���� �����Ѵ�.
���������� ���������� ���� Ŭ�������� ���� �÷��̾��� �� / ���������� ������ �÷��̾� ��
��ü ���������� ���� N, ������ �̿��ϴ� ����ڰ� ���� �����ִ� ���������� ��ȣ�� ��� �迭 stages�� �Ű������� �־��� ��, 
�������� ���� ������������ ������������ ���������� ��ȣ�� ����ִ� �迭�� return �ϵ��� solution �Լ��� �ϼ��϶�.

���ѻ���
���������� ���� N�� 1 �̻� 500 ������ �ڿ����̴�.
stages�� ���̴� 1 �̻� 200,000 �����̴�.
stages���� 1 �̻� N + 1 ������ �ڿ����� ����ִ�.
�� �ڿ����� ����ڰ� ���� ���� ���� ���������� ��ȣ�� ��Ÿ����.
��, N + 1 �� ������ ��������(N ��° ��������) ���� Ŭ���� �� ����ڸ� ��Ÿ����.
���� �������� ���� ���������� �ִٸ� ���� ��ȣ�� ���������� ���� ������ �ϸ� �ȴ�.
���������� ������ ������ ���� ��� �ش� ���������� �������� 0 ���� �����Ѵ�.

����� ��
N	stages	                    result
5	[2, 1, 2, 6, 2, 4, 3, 3]	[3,4,2,1,5]
4	[4,4,4,4,4]	                [4,1,2,3]

����� �� #1
1�� ������������ �� 8���� ����ڰ� ����������, �� �� 1���� ����ڰ� ���� Ŭ�������� ���ߴ�. ���� 1�� ���������� �������� ������ ����.
1 �� �������� ������ : 1/8

2�� ������������ �� 7���� ����ڰ� ����������, �� �� 3���� ����ڰ� ���� Ŭ�������� ���ߴ�. ���� 2�� ���������� �������� ������ ����.
2 �� �������� ������ : 3/7

���������� ������ ���������� �������� ������ ����.

3 �� �������� ������ : 2/4

4�� �������� ������ : 1/2

5�� �������� ������ : 0/1

�� ���������� ��ȣ�� �������� ������������ �����ϸ� ������ ����.

[3,4,2,1,5]

* /

bool comp(pair<double, int> a, pair<double, int> b) 
{
    if (a.first == b.first)
        return a.second < b.second;

    else
        return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    vector<pair<double, int>> StageFailRate;
    sort(stages.begin(), stages.end());

    for (int i = 1; i <= N; ++i) 
    {
        auto upit = upper_bound(stages.begin(), stages.end(), i);
        auto loit = lower_bound(stages.begin(), stages.end(), i);

        double nupIdx = distance(stages.begin(), upit);
        double nloIdx = distance(stages.begin(), loit);
        
        double nTotalChallanger = stages.size() - nloIdx;
        double nFailChallanger = nupIdx - nloIdx;

        double FailRate = 0;
        if(nTotalChallanger != 0)
            FailRate = nFailChallanger / nTotalChallanger;

        StageFailRate.push_back(make_pair( FailRate, i));
    }
    
    sort(StageFailRate.begin(), StageFailRate.end(), comp);

    for (int i = 0; i < StageFailRate.size(); ++i) 
    {
        answer.push_back(StageFailRate[i].second);
    }


    return answer;
}

void main() 
{
    int n = 4;
    vector<int> stages = { 4, 4, 4, 4, 4 };

    solution(n, stages);
}*/