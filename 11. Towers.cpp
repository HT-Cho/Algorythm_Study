/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

typedef long long ll;
/*
특정 순서로 n 개의 큐브가 주어지며, 당신의 임무는 그것을 사용하여 타워를 건설하는 것입니다. 

두 개의 큐브가 다른 큐브의 위에있을 때마다 위쪽 큐브는 아래쪽 큐브보다 작아야합니다.

주어진 순서대로 큐브를 처리해야합니다. 언제든지 기존 타워 위에 큐브를 놓거나 새 타워를 시작할 수 있습니다. 가능한 최소 타워 수는 얼마입니까?

입력

첫 번째 입력 행에는 정수 n (큐브 수)이 포함됩니다.

다음 줄은 n 개의 정수 k1, k2,…, kn : 큐브의 크기를 포함합니다.

산출

하나의 정수 (최소 타워 수)를 인쇄합니다.

Input:
5
3 8 2 1 5 

1     
2 5  
3 8 

Output:
2
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nCnt, nTmp;
	cin >> nCnt;

	bool bAdd;
	multiset<ll> data;
	multiset<ll>::iterator data_IT;
	for (int i = 0; i < nCnt; ++i) 
	{
		cin >> nTmp;
		
		data_IT = data.lower_bound(nTmp + 1);

		if (data_IT == data.end())
			data.insert(nTmp);

		else 
		{
			data.erase(data_IT);
			data.insert(nTmp);
		}		
	}	

	cout << data.size() << "\n";
	
	return 0;
}*/