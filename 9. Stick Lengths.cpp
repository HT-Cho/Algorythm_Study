/*#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
�ణ�� ���̸� ���� n ���� ����Ⱑ �ֽ��ϴ�. 
����� �ӹ��� �� ����Ⱑ ���� ���̸� ������ ����⸦ �����ϴ� ���Դϴ�. 
�� ��ƽ�� �ø��ų� ���� �� �ֽ��ϴ�. �� �۾��� ����� x�Դϴ�. ���⼭ x�� �� ���̿� ���� ������ �����Դϴ�. 
�ּ� �� ����� ���Դϱ�? 

�Է� 
ù ��° �Է� �ٿ��� ���� n (��ƽ ����)�� ���Ե˴ϴ�. 
�׸��� n ���� ������ �ֽ��ϴ� : p1, p2,��, pn : ������� ����. 

���� 
�ϳ��� ���� (�ּ� �� ���)�� �μ��Ͻʽÿ�.

Example

Input:
5
2 3 1 5 2

Output:
5
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nTmp;
	vector<ll> vec_Sticklen;
	cin >> nCnt;

	for (int i = 0; i < nCnt; ++i) 
	{
		cin >> nTmp;
		vec_Sticklen.push_back(nTmp);
	}

	sort(vec_Sticklen.begin(), vec_Sticklen.end());

	ll nMid = vec_Sticklen[nCnt / 2];

	ll nResult = 0;
	for (int i = 0; i < nCnt; ++i) 
	{
		nResult += abs(vec_Sticklen[i] - nMid);
	}

	cout << nResult << '\n';

	return 0;
}*/