/*#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <set>
#include <tuple>
#include <queue>
using namespace std;

typedef long long ll;
long long nMod = 1000000007;
/*
양의 정수 값을 가진 n 개의 동전이 있습니다. 코인의 하위 집합을 사용하여 만들 수없는 최소 금액은 얼마입니까?

입력

첫 번째 입력 줄에는 정수 n (코인 수)이 있습니다.

두 번째 줄에는 n 개의 정수 x1, x2,…, xn : 각 동전의 가치가 있습니다.

산출

하나의 정수 (가장 작은 동전 합계)를 인쇄합니다.

제약
1≤n≤2⋅10^5
1≤xi≤10^9
예

입력:
5
2 9 1 2 7

1 2 2 7 9

l = 1  r = 9
10

l = 1 r = 7
8

l = 1 r = 2
3

l = 2 r = 2
4
산출:
6


1 2 1+2 2+2 1+2+2 " " 7 1+7 
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;

	vector<ll> xn(n);
	for (int i = 0; i < n; ++i) 
	{
		cin >> xn[i];		
	}	

	sort(xn.begin(), xn.end());

	ll res = 1;

	for (int i = 0; i < xn.size() && xn[i] <= res; ++i)
		res += xn[i];

	cout << res << '\n';

	return 0;
}*/