/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
/ *
input 1 n == ��û�� ��, m ����Ʈ ��, k �ִ� ���ġ
input 2 n���� ���� ���ϴ� ����Ʈ ũ��, x�ΰ�� x-k ~ x+k ���� ���
input 3 m���� ���� ����Ʈ ũ��

output ����� ���� ���� �� �ִ� ��� ��
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nPeople, nApartment, nSize;
	cin >> nPeople >> nApartment >> nSize;

	vector<ll> vec_WishSize, vec_AptSize, vec_Match;
	vector<ll>::iterator vec_IT_WishSize, vec_IT_AptSize;
	ll nIndex = 0, nTmp;

	for(nIndex; nIndex < nPeople; nIndex++)
	{
		cin >> nTmp;
		vec_WishSize.push_back(nTmp);
	}
	for(nIndex = 0; nIndex < nApartment; nIndex++)
	{
		cin >> nTmp;
		vec_AptSize.push_back(nTmp);
	}

	sort(vec_WishSize.begin(), vec_WishSize.end());
	sort(vec_AptSize.begin(), vec_AptSize.end());

	vec_IT_WishSize = vec_WishSize.begin();
	vec_IT_AptSize = vec_AptSize.begin();
	ll nMatchCnt = 0;
	
	while(vec_IT_WishSize != vec_WishSize.end() && vec_IT_AptSize != vec_AptSize.end())
	{		
		if(*vec_IT_WishSize + nSize < *vec_IT_AptSize)
			++vec_IT_WishSize;
		
		else if(*vec_IT_WishSize - nSize > *vec_IT_AptSize)
			++vec_IT_AptSize;
		else
		{
			++vec_IT_WishSize;
			++vec_IT_AptSize;
			++nMatchCnt;
		}		
	}

	cout << nMatchCnt << "\n";
	return 0;
}*/