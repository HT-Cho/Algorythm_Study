/*
#include <iostream>
#include <string>
using namespace std;

ab ab cd da ba b

int solution(string s) 
{
	int answer = s.length();

	int nCnt = 1;
	string sTmp, sPrev, sResult = "";
	for (int i = 1; i <= s.length() / 2; ++i)	// n/2이상으로 나누면 크기 안작아짐
	{
		sResult = "";

		sPrev = s.substr(0, i);	// 맨 처음 부터 몇글자 (초기 값)
		for (int j = i; j <= s.length(); j+=i) 
		{
			if (sPrev == s.substr(j, i)) // 다음 문자열과 비교 같으면 ++
			{
				++nCnt;
			}

			else // 다음 문자열과 다를때
			{
				if (nCnt == 1) 
				{
					sResult += sPrev;	//결과 문자열에 이어주기
				}

				else 
				{
					sResult += to_string(nCnt) + sPrev; // 숫자와 함께 결과 문자열에 이어주기
				}

				// 초기화
				sPrev = s.substr(j, i);
				nCnt = 1;
			}			
		}

		if (s.length() / i != 0) 
		{
			sResult += s.substr((s.length() / i) * i);
		}

		if (answer > sResult.length())
			answer = sResult.length();
	}

	return answer;
}

int main() 
{
	string s = "ababcdcdababcdcd";

	cout << solution(s) << endl;
	cin >> s;

	return 0;
}*/