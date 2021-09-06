/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/*
n 개의 동전으로 구성된 화폐 시스템을 생각해보십시오. 
각 동전에는 양의 정수 값이 있습니다. 
당신의 임무는 사용 가능한 동전을 사용하여 돈 합계 x를 생산할 수있는 고유 한 순서의 수를 계산하는 것입니다.

예를 들어, 동전이 {2,3,5}이고 원하는 합계가 9이면 세 가지 방법이 있습니다.
2 + 2 + 5
3 + 3 + 3
2 + 2 + 2 + 3
입력

첫 번째 입력 줄에는 두 개의 정수 n과 x가 있습니다 : 동전 수와 원하는 금액입니다.

두 번째 줄에는 n 개의 고유 한 정수 c1, c2,…, cn (각 동전의 가치)이 있습니다.

산출

하나의 정수 (mod 1000000007)를 인쇄합니다.

제약
1≤n≤100
1≤x≤106
1≤ci≤106

예
입력:
3 9
2 3 5

산출:
3
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll mod = 1000000007;
	ll nCoinCnt, nTarget;
	cin >> nCoinCnt >> nTarget;
	vector<ll> vec_Coins(nCoinCnt);

	for (int i = 0; i < nCoinCnt; ++i)
	{
		cin >> vec_Coins[i];
	}

	vector<ll> vec_dp(nTarget + 1, 0);
	vec_dp[0] = 1;
	
	return 0;
}
*/