/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/ *
input 1 n Ƽ�� ��, m �� ��
input 2 n���� ���� Ƽ�� ����
input 3 m���� ���� ���� �ִ� ���� �ѵ�

output ���� Ƽ�� ���� ���ݺ��� ������ ������ -1, ������ �װ� ���

ex)
5 3
5 3 7 8 5
4 8 3

3 5 5 7 8
3 4 8

3
8
-1
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nPrice, nPeople;
	cin >> nPrice >> nPeople;

	multiset<ll, greater<ll>> mset_Price;
	multiset<ll, greater<ll>>::iterator mset_IT_Price;
	
	ll ntmp;
	for(int i = 0; i < nPrice; ++i)
	{
		cin >> ntmp;
		mset_Price.insert(ntmp);	
	}

	for(int i = 0; i < nPeople; ++i)
	{
		cin >> ntmp;

		mset_IT_Price = mset_Price.lower_bound(ntmp);

		if(mset_IT_Price == mset_Price.end())
			cout << -1 << '\n';

		else
		{
			cout << *mset_IT_Price << '\n';
			//mset_Price.erase(*mset_IT_Price);
		}		
	}
	

	return 0;
}*/