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
	for (int i = 1; i <= s.length() / 2; ++i)	// n/2�̻����� ������ ũ�� ���۾���
	{
		sResult = "";

		sPrev = s.substr(0, i);	// �� ó�� ���� ����� (�ʱ� ��)
		for (int j = i; j <= s.length(); j+=i) 
		{
			if (sPrev == s.substr(j, i)) // ���� ���ڿ��� �� ������ ++
			{
				++nCnt;
			}

			else // ���� ���ڿ��� �ٸ���
			{
				if (nCnt == 1) 
				{
					sResult += sPrev;	//��� ���ڿ��� �̾��ֱ�
				}

				else 
				{
					sResult += to_string(nCnt) + sPrev; // ���ڿ� �Բ� ��� ���ڿ��� �̾��ֱ�
				}

				// �ʱ�ȭ
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