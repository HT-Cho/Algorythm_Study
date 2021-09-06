/*
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

/*
	괄호로만 입력된 문자열을 u, v로 나눈다
* /

bool IsVPS(const std::string& _parenthesis)
{
	std::stack<char> lParStack;

	for (auto ch : _parenthesis)
	{
		if ('(' == ch)
			lParStack.push(ch);
		else
		{
			if (lParStack.empty()) return false;

			lParStack.pop();
		}
	}

	if (lParStack.empty())
		return true;
	else
		return false;
}

int Devide_String(string p) 
{
	int nCnt1 = 0;
	for (int i = 0; i < p.length(); ++i) 
	{		
		if (p[i] == '(')
			nCnt1++;
		else
			nCnt1--;


		if (nCnt1 == 0) 
		{		
			return i;
		}
	}
}

string solution(string p) 
{
	string answer = "";

	if (p.length() == 0)
		return "";

	string u, v;
	int nIndex = Devide_String(p);

	u = p.substr(0, nIndex + 1);
	v = p.substr(nIndex + 1, p.length());


	if (IsVPS(u) == true) 
	{
		answer = u + solution(v);
	}
		
	else 
	{
		answer = '(';
		answer += solution(v);
		answer += ')';

		u = u.substr(1, u.length() - 2);

		for (int i = 0; i < u.length(); ++i) 
		{
			if (u[i] == '(')
				u[i] = ')';
			else
				u[i] = '(';
		}

		answer += u;
	}	

	return answer;
}

void main() 
{
	string p = ")(";

	cout << solution(p) << endl;
	cin >> p;
}*/