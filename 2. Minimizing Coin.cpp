/*#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/*
n 개의 동전으로 구성된 화폐 시스템을 생각해보십시오. 

각 동전에는 양의 정수 값이 있습니다. 

귀하의 임무는 사용 가능한 동전을 사용하여 동전 수를 최소화하는 방식으로 돈의 합계를 생성하는 것입니다. 

예를 들어 코인이 {1,5,7}이고 원하는 합계가 11 인 경우 최적의 솔루션은 3 개의 코인이 필요한 5 + 5 + 1입니다. 

입력 
첫 번째 입력 줄에는 두 개의 정수 n과 x가 있습니다 : 동전 수와 원하는 금액입니다. 
두 번째 줄에는 n 개의 고유 한 정수 c1, c2,…, cn (각 동전의 가치)이 있습니다.

산출 
하나의 정수 (최소 동전 수)를 인쇄합니다. 원하는 합계를 산출 할 수 없으면 −1을 인쇄하십시오.

Input:
3 11
1 5 7

Output:
3
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll Cnt, Target;
	cin >> Cnt >> Target;

	vector<ll> Coins(Cnt);
	vector<ll> dp(Target + 1, -1);

	dp[0] = 0;
	for (ll i = 0; i < Cnt; ++i) 
	{
		cin >> Coins[i];
		if(Target >= Coins[i])
			dp[Coins[i]] = 1;
	}

	sort(Coins.begin(), Coins.end());
	
	for (int i = 1; i <= Target; ++i) 
	{
		for (int j = 0; j < Cnt; ++j) 
		{			
			if (i <= Coins[j])
				continue;

			if (dp[i - Coins[j]] >= 0) 
			{
				if (dp[i] == -1)
					dp[i] = 1 + dp[i - Coins[j]];

				else
					dp[i] = min(dp[i], 1 + dp[i - Coins[j]]);
			}
		}
	}
	
	cout << dp[Target] << '\n';
	

	return 0;
}*/