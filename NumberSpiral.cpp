/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long nCmdCnt;
	cin >> nCmdCnt;

	long long y, x;	// 좌표 세로:y 가로:x
	
	vector<long long> vec_Result;
	for(int n = 0; n < nCmdCnt; ++n)
	{
		cin >> y >> x;

		if(x > y || x == y)
		{
			if(x % 2 == 1)
				vec_Result.push_back(x * x - (y - 1));
			else
				vec_Result.push_back((x - 1) * (x - 1) + y);
		}

		else
		{
			if(y % 2 == 1)
				vec_Result.push_back((y - 1) * (y - 1) + x);
			else
				vec_Result.push_back(y * y - (x - 1));
		}
	}

	for(int i = 0; i < vec_Result.size(); ++i)
	{
		cout << vec_Result[i] << '\n';
	}

	return 0;
}*/