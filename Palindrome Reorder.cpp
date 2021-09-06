/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strInput, strOutput;
	cin >> strInput;

	int alpabet_Cnt[26] = {0};
	int strInputSize = strInput.size();
	
	int nIndex = 0;
	for(nIndex; nIndex < strInputSize; ++nIndex)
	{
		alpabet_Cnt[strInput[nIndex] - 'A']++;
	}

	int oddCnt = 0;
	char chCenter;
	for(nIndex = 0; nIndex < 26; ++nIndex)
	{
		if(alpabet_Cnt[nIndex] % 2 != 0)
		{
			++oddCnt;

			if(oddCnt > 1)
			{
				cout << "NO SOLUTION" << "\n";
				return 0;
			}

			if(oddCnt == 1)
				chCenter = 'A' + nIndex;
		}
	}

	char chTmp;
	string strFirHalf, strSecHalf;
	for(nIndex = 0; nIndex < 26; ++nIndex)
	{
		chTmp = 'A' + nIndex;
		if(alpabet_Cnt[nIndex] > 0)
		{
			string strTmp(alpabet_Cnt[nIndex]/2, chTmp);
			strFirHalf = strFirHalf + strTmp;
			strSecHalf = strTmp + strSecHalf;
		}

		if(oddCnt == 1)
			strOutput = strFirHalf + chCenter + strSecHalf;
		else
			strOutput = strFirHalf + strSecHalf;
	}

	cout << strOutput << "\n";
	return 0;
}*/