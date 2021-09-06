/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
/*
	input 
	1. n -> 노래 수
	2. n개의 정수 -> 노래의 id값
	-> n의 값이 같으면 같은노래?

	output
	각 노래가 고유한 가장 긴 연속 노래 순서?
	고유 -> distinct?
	가장 긴곡의 길이cd A

	// sorting 하지 않고 연속된 값이 중복되지 않는 그런식으로 만들어서 길이 찍으라는듯?
	ex)
	
	8
	1 2 1 3 2 7 4 2
	5
	1 2 3 7 4

	1 1 2 2 2 3 4 7
	1 2 3 4 7

	3 3 3 3 5 1 5 1 1 4
	
	1 3 4 5
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nSize, nTmp;
	cin >> nSize;

	vector<ll> vec_Playlist;	
	for(int i = 0; i < nSize; ++i)
	{
		cin >> nTmp;
		vec_Playlist.push_back(nTmp);		
	}		

	set<ll> set_PlyList;
	ll maxSize = 0, tmp = 0, id = 0, idx = 0;
	
	while(idx < nSize)
	{
		if(set_PlyList.count(vec_Playlist[idx]))
		{
			tmp = set_PlyList.size();
			maxSize = max(maxSize, tmp);

			while(vec_Playlist[id] != vec_Playlist[idx])
			{
				set_PlyList.erase(vec_Playlist[id]);
				id++;
			}

			id++;
		}
		else
		{
			set_PlyList.insert(vec_Playlist[idx]);
		}

		idx++;
		
		tmp = set_PlyList.size();
		maxSize = max(maxSize, tmp);
	}

	cout << maxSize << "\n";

	return 0;
}*/