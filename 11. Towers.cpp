/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

typedef long long ll;
/*
Ư�� ������ n ���� ť�갡 �־�����, ����� �ӹ��� �װ��� ����Ͽ� Ÿ���� �Ǽ��ϴ� ���Դϴ�. 

�� ���� ť�갡 �ٸ� ť���� �������� ������ ���� ť��� �Ʒ��� ť�꺸�� �۾ƾ��մϴ�.

�־��� ������� ť�긦 ó���ؾ��մϴ�. �������� ���� Ÿ�� ���� ť�긦 ���ų� �� Ÿ���� ������ �� �ֽ��ϴ�. ������ �ּ� Ÿ�� ���� ���Դϱ�?

�Է�

ù ��° �Է� �࿡�� ���� n (ť�� ��)�� ���Ե˴ϴ�.

���� ���� n ���� ���� k1, k2,��, kn : ť���� ũ�⸦ �����մϴ�.

����

�ϳ��� ���� (�ּ� Ÿ�� ��)�� �μ��մϴ�.

Input:
5
3 8 2 1 5 

1     
2 5  
3 8 

Output:
2
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nTmp;
	cin >> nCnt;

	bool bAdd;
	multiset<ll> data;
	multiset<ll>::iterator data_IT;
	for (int i = 0; i < nCnt; ++i) 
	{
		cin >> nTmp;
		
		data_IT = data.lower_bound(nTmp + 1);

		if (data_IT == data.end())
			data.insert(nTmp);

		else 
		{
			data.erase(data_IT);
			data.insert(nTmp);
		}		
	}	

	cout << data.size() << "\n";
	
	return 0;
}*/