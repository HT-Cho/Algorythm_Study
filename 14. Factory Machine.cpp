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
공장에는 제품을 만드는 데 사용할 수있는 n 개의 기계가 있습니다. 당신의 목표는 총 t 개의 제품을 만드는 것입니다.

각 기계에 대해 단일 제품을 만드는 데 필요한 시간 (초)을 알고 있습니다. 기계는 동시에 작동 할 수 있으며 일정을 자유롭게 결정할 수 있습니다.

t 제품을 만드는 데 필요한 최단 시간은 얼마입니까?

입력

첫 번째 입력 줄에는 두 개의 정수 n과 t가 있습니다 : 기계와 제품의 수입니다.

다음 줄에는 n 개의 정수 k1, k2,…, kn이 있습니다. 각 기계를 사용하여 제품을 만드는 데 필요한 시간입니다.

산출

하나의 정수 (t 제품을 만드는 데 필요한 최소 시간)를 인쇄하십시오.

제약
1≤n≤2⋅10^5
1≤t≤10^9
1≤ki≤10^9
예

입력:
3 7
3 2 5

산출:
8

목표개수			      	  7개
기계						1 2 3
1개 제작 소요시간			3 2 5
제한시간 동안 만든 개수     2 3 1

		1	2	3	4	5	6	7	8	9	10	11	12	13	14
기계 1	0	0	1	1	1	2	2	2	3	3	3	4	4	4
기계 2	0	1	1	2	2	3	3	4	4	5	5	6	6	7
기계 3	0	0	0	0	1	1	1	1	1	2	2	2	2	2
총합	0	1	2	3	4	6	6	7
설명 : 기계 1은 2 개의 제품을, 기계 2는 4 개의 제품을, 기계 3은 1 개의 제품을 만듭니다.
* /
int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, t, kn;	// 기계 수, 제품 수, 각 기계를 사용하여 제품을 만드는 시간
	cin >> n >> t;

	multiset<ll> machinetime;

	for (int i = 0; i < n; ++i) 
	{
		cin >> kn;
		machinetime.insert(kn);
	}

	sort(machinetime.begin(), machinetime.end());

	ll mintime = 0, maxtime = machinetime[0] * t, mid, ret;

	while (mintime <= maxtime)
	{
		mid = (mintime + maxtime) >> 1;

		ll total= 0;
		for (auto i : machinetime)
		{
			total += mid / i;

			if (total >= t)
				break;
		}

		if (total >= t)
		{
			ret = mid;
			maxtime = mid - 1;
		}

		else 
		{
			mintime = mid + 1;
		}
	}

	cout << ret << '\n';

	return 0;
}*/