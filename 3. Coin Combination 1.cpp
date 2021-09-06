/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/*
	n = ���� ��, x = ���ϴ� �ݾ�

	������ ������ ������ �������� ���ϴ� �ݾ��� ����� ����� �� ���
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll mod = 1000000007;
	ll nCoinCnt, nTarget;
	cin >> nCoinCnt >> nTarget;
	vector<ll> vec_Coins(nCoinCnt);
	
	for(int i = 0; i < nCoinCnt; ++i)
	{
		cin >> vec_Coins[i];
	}
	
	vector<ll> vec_dp(nTarget + 1, 0);
	vec_dp[0] = 1;

	for(int i = 1; i <= nTarget; i++)
	{
		for(int j = 0; j < nCoinCnt; j++)
		{
			if(i-vec_Coins[j] >= 0)
			{
				vec_dp[i] += vec_dp[i-vec_Coins[j]];
				vec_dp[i] %= mod;
			}
		}
	}

	cout << vec_dp[nTarget] << "\n";

	return 0;
}*/