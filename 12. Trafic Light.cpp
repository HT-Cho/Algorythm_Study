/*#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <set>
#include <tuple>
using namespace std;

typedef long long ll;
/*
위치가 0,1,…, x로 번호가 매겨진 길이 x의 거리가 있습니다. 

처음에는 신호등이 없지만 n 세트의 신호등이 차례로 거리에 추가됩니다. 
당신의 임무는 각 추가 후 신호등이없는 가장 긴 통로의 길이를 계산하는 것입니다. 

입력 
첫 번째 입력 줄에는 두 개의 정수 x와 n이 포함됩니다. 즉, 거리의 길이와 신호등 세트 수입니다. 
그런 다음 다음 줄에는 n 개의 정수 p1, p2,…, pn (각 신호등 세트의 위치)이 포함됩니다. 각 위치는 다릅니다. 

산출 
추가 할 때마다 신호등없이 가장 긴 통로의 길이를 인쇄하십시오. 

제약 
1≤x≤109 
1≤n≤2⋅105 
0 <pi <x 

예 
입력: 
8 3 
3 6 2 

산출: 
5 3 3

0 1 2 3 4 5 6 7 8
    1 1     1

절대값 사용, 
* /

int main() 
{ 
	long nStreet; 
	int nLight; 
	cin >> nStreet >> nLight; 
	set <tuple<long, long>> street{ make_tuple(nStreet, nStreet) }; 
	set <tuple<long, long>> t_street{ make_tuple(nStreet, nStreet) }; 
	
	while (nLight--) 
	{ 
		long temp; 
		cin >> temp; 
		auto it = street.lower_bound(make_tuple(temp, 0)); 

		int pre, cur; 
		tie(pre, cur) = *it;
		street.erase(it); 
		
		street.insert(make_tuple(temp, cur - (pre - temp))); 
		street.insert(make_tuple(pre, pre - temp)); 
		
		t_street.erase(make_tuple(cur, pre)); 
		t_street.insert(make_tuple(cur - (pre - temp), temp)); 
		t_street.insert(make_tuple(pre - temp, pre)); 
		
		cout << get<0>(*t_street.rbegin()); 
		
		if (nLight > 0) 
			cout << " "; 
	} 
	
	cout << endl; 
	
	return 0; 
}*/