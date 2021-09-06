/*
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";
	
	multimap<string, bool> mulMap_RunnerCheck;
	multimap<string, bool>::iterator mulMap_IT_RunnerCheck;

	for(int i = 0; i < participant.size(); ++i)
	{
		mulMap_RunnerCheck.insert(pair<string, bool>(participant[i], false));
	}
	
	for(int i = 0; i < completion.size(); ++i)
	{
		mulMap_IT_RunnerCheck = mulMap_RunnerCheck.find(completion[i]);
		mulMap_IT_RunnerCheck->second = true;
	}

	mulMap_IT_RunnerCheck = mulMap_RunnerCheck.begin();
	while(mulMap_IT_RunnerCheck != mulMap_RunnerCheck.end())
	{
		if(mulMap_IT_RunnerCheck->second == false)
		{
			answer = mulMap_IT_RunnerCheck->first;
			break;
		}

		++mulMap_IT_RunnerCheck;
	}
	
	return answer;
}

int main()
{
	int nRunnerCnt;
	cin >> nRunnerCnt;

	vector<string> participant(nRunnerCnt), completion(nRunnerCnt - 1);
	for(int i = 0; i < nRunnerCnt; ++i)
	{
		cin >> participant[i];
	}

	for(int i = 0; i < nRunnerCnt - 1; ++i)
		cin >> completion[i];

	cout << solution(participant, completion) << endl;	

	return 0;
}*/