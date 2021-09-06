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
n 개의 작업을 처리해야합니다. 각 작업에는 기간과 기한이 있으며 순서에 따라 차례대로 작업을 처리합니다. 

작업에 대한 보상은 d-f이며 여기서 d는 마감일이고 f는 완료 시간입니다. (시작 시간은 0이며, 작업이 마이너스 보상을 받더라도 모든 작업을 처리해야합니다.)

최적으로 행동하면 최대 보상은 얼마입니까?

입력

첫 번째 입력 줄에는 정수 n (작업 수)이 있습니다.

그 다음에는 작업을 설명하는 n 줄이 있습니다. 각 줄에는 두 개의 정수 a와 d가 있습니다. 작업 기간과 기한입니다.

산출

하나의 정수 (최대 보상)를 인쇄하십시오.

제약
1≤n≤2⋅10^5
1≤a, d≤10^6
예

입력:
3
6 10
8 15
5 12

1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20
                7						-1								-4
산출:
2
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, a, d;	// 개수, 소요시간, 데드라인
	cin >> n;

	vector<pair<ll, ll>> task(n);

	for (int i = 0; i < n; ++i) 
	{
		cin >> a >> d;
		task[i] = make_pair(a, d);
	}

	sort(task.begin(), task.end());

	ll end = 0, sco = 0;
	
	auto it = task.begin();

	for (it; it != task.end(); ++it) 
	{
		end += it->first;

		sco += it->second - end;
	}

	cout << sco << '\n';

	return 0;
}*/