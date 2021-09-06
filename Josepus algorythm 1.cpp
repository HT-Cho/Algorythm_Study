/*#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <set>
#include <tuple>
#include <queue>
#include <unordered_set>
using namespace std;

typedef long long ll;
long long nMod = 1000000007;
/*
원 안에 n 명의 아이들 (숫자 1,2,…, n)이있는 게임을 생각해보십시오. 
게임이 진행되는 동안 두 번째 어린이는 남은 어린이가 없을 때까지 서클에서 제거됩니다. 
자녀는 어떤 순서로 제거됩니까? 

입력 
유일한 입력 행에는 정수 n이 있습니다. 

산출 n 개의 정수 인쇄 : 제거 순서. 

제약 
1≤n≤2⋅105 

예 
입력: 
7 

산출: 
2 4 6 1 5 3 7

1	2	3	4	5	6	7	8	10	12	14

3	7
	  	
1	3	5	7	9	11	13
2	4	6	8	10	12	14
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;	

	vector<ll> Circle;
	priority_queue<ll> que;
	
	unordered_set<ll> circleset;
	
	for (auto i = 1; i <= n; ++i) 
	{
		Circle.push_back(i);
		circleset.insert(i);
	}
		
	que.pop();

	ll idx = 0;
	auto it = Circle.begin();
	while (Circle.size() != 1)
	{
		idx += 1;		

		if (idx >= Circle.size())
			idx %= Circle.size();		

		cout << Circle[idx] << " ";

		Circle.erase(it + idx);

		it = Circle.begin();
	}

	cout << Circle[0] << '\n';


	return 0;
}*/