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
n 개의 책이 있고 Kotivalo와 Justiina가 모두 읽을 것입니다. 각 책에 대해 읽는 데 걸리는 시간을 알고 있습니다.

그들은 둘 다 처음부터 끝까지 각 책을 읽었으며 동시에 책을 읽을 수 없습니다. 필요한 최소 총 시간은 얼마입니까?

입력

첫 번째 입력 줄에는 정수 n (책 수)이 있습니다.

두 번째 줄에는 n 개의 정수 t1, t2,…, tn (각 책을 읽는 데 필요한 시간)이 있습니다.

산출

하나의 정수 (최소 총 시간)를 인쇄합니다.

제약
1≤n≤2⋅10^5
1≤ti≤10^9
예

입력:
3
2 8 3

산출:
16

	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20
k		t1			t2								t3
j								t3			t2		t1
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, tmp;
	cin >> n;

	vector<ll> tn(n);
	for (int i = 0; i < n; ++i) 
	{
		cin >> tmp;
		tn[i] = tmp;
	}		
	vector <tuple <long, int, int> > num_arr;
	for (int i = 0; i < n - 1; ++i) 
	{
		for (int y = i + 1; y < n; ++y) 
		{
			num_arr.push_back(make_tuple(tn[i] + tn[y], i + 1, y + 1));
		}
	}

	return 0;
}*/