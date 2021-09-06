/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<ll> vec_Dice;
	
	vec_Dice.push_back(0);
	vec_Dice.push_back(1);
	vec_Dice.push_back(2);
	vec_Dice.push_back(4);
	vec_Dice.push_back(8);
	vec_Dice.push_back(16);
	vec_Dice.push_back(32);

	ll nInput;
	cin >> nInput;

	for(int i = 7; i <= nInput; i++)
	{
		vec_Dice.push_back((vec_Dice[i-1] + vec_Dice[i-2] + vec_Dice[i-3] + vec_Dice[i-4] + vec_Dice[i-5] + vec_Dice[i-6]) % 1000000007);
	}

	cout << vec_Dice[nInput] <<"\n";

	return 0;
}*/