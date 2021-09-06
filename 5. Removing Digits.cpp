/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/*
	정수 n 입력

	ex
	input 27
	output 5
	27 -> 20 -> 18 -> 10 -> 9 -> 0

* / 

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll nInput, nCnt = 0, nTmp;
	cin >> nInput;

	vector<ll> dp(nInput + 1, 10000000000);	

	dp[0] = 0;
	for(int i = 0; i <= nInput; ++i)
	{
		nTmp = i;
		while(nTmp)
		{
			int r_digit = nTmp % 10;
			dp[i] = min(dp[i], dp[i - r_digit] + 1);
			nTmp /= 10;
		}
	}

	cout << dp[nInput] << "\n";

	return 0;
}*/