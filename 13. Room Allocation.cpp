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

/*
큰 호텔이 있고 n 명의 고객이 곧 도착합니다. 각 고객은 싱글 룸을 원합니다.

각 고객의 도착 일과 출발일을 알고 있습니다. 첫 번째 고객의 출발일이 두 번째 고객의 도착 일보다 빠른 경우 두 고객이 같은 객실에 머물 수 있습니다.

모든 고객을 수용하기 위해 필요한 최소 객실 수는 얼마입니까? 그리고 방을 어떻게 할당 할 수 있습니까?

입력

첫 번째 입력 줄에는 정수 n (고객 수)이 포함됩니다.

그런 다음 n 개의 행이 있으며 각 행은 한 고객을 설명합니다. 각 행에는 도착 일과 출발일이라는 두 개의 정수 a와 b가 있습니다.

산출

먼저 정수 k : 필요한 최소 방 수를 인쇄하십시오.

그런 다음 입력과 동일한 순서로 각 고객의 방 번호가 포함 된 행을 인쇄하십시오. 방의 번호는 1,2,…, k입니다. 유효한 솔루션을 인쇄 할 수 있습니다.

제약
1≤n≤2⋅105
1≤a≤b≤109
예

입력:
3
1 2    
2 4      
4 4      

산출:
2
1 2 1
* /

int main()
{
	// 필요한 정보 방번호, 도착 시간, 출발 시간, 방 비어있는 여부
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll arr, dep, ncus, room_count = 0;

	cin >> ncus;

	vector<tuple<ll, ll, ll>> in_scedule;
	for (ll idx = 0; idx < ncus; ++idx) 
	{
		cin >> arr >> dep;

		in_scedule.push_back(make_tuple(arr, dep, idx));
	}

	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> room_q;
	vector<ll> nRoom(ncus);

	sort(in_scedule.begin(), in_scedule.end());

	for (auto it = in_scedule.begin(); it != in_scedule.end(); ++it) 
	{
		ll cust_id, current;
		tie(arr, dep, cust_id) = *it;

		if (room_q.empty() || get<0>(room_q.top()) >= arr) 
		{
			current = ++room_count;
		}

		else 
		{
			current = get<1>(room_q.top());
			room_q.pop();
		}

		room_q.push(make_pair(dep, current));
		nRoom[cust_id] = current;
	}

	cout << room_count << '\n';

	for (int i = 0; i < nRoom.size(); ++i)
		cout << nRoom[i] << ' ';

	return 0;
}*/
