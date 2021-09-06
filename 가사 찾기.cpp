/*
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
	if (a.length() < b.length())
		return true;
	else if (a.length() == b.length())
		if (a < b) return true;
	return false;
}

vector<int> solution(vector<string> words, vector<string> queries) 
{
	vector<int> answer;

	vector<string> rwords = words;
	for (int i = 0; i < rwords.size(); ++i)
	{
		reverse(rwords[i].begin(), rwords[i].end());
	}

	sort(words.begin(), words.end(), comp);
	sort(rwords.begin(), rwords.end(), comp);

	int len, lo, hi, cnt;
	int idx;
	for (string query : queries) {
		len = query.length();

		if (query[0] == '?') {
			reverse(query.begin(), query.end());
			idx = query.find_first_of('?');

			for (int i = idx; i < len; i++) query[i] = 'a';
			lo = lower_bound(rwords.begin(), rwords.end(), query, comp) - rwords.begin();

			for (int i = idx; i < len; i++) query[i] = 'z';
			hi = upper_bound(rwords.begin(), rwords.end(), query, comp) - rwords.begin();
		}
		else {
			idx = query.find_first_of('?');

			for (int i = idx; i < len; i++) query[i] = 'a';
			lo = lower_bound(words.begin(), words.end(), query, comp) - words.begin();

			for (int i = idx; i < len; i++) query[i] = 'z';
			hi = upper_bound(words.begin(), words.end(), query, comp) - words.begin();
		}

		cnt = hi - lo;
		answer.push_back(cnt);
	}

	return answer;
}

int main()
{
	vector<string> words = { "frodo", "front", "frost", "frozen", "frame", "kakao" };
	vector<string> queries = { "fro??", "????o", "fr???", "fro???", "pro?" };

	vector<int> answer = solution(words, queries);


	for (int i = 0; i < answer.size(); ++i) 
	{
		cout << answer[i] << endl;
	}
	int n;
	cin >> n;
	return 0;
}
*/