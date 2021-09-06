/*
#include <iostream>
using namespace std;
typedef unsigned long long ll;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;

	ll x, y;
	for (ll i = 0; i < n; ++i) 
	{		
		cin >> x >> y;

		if ((x + y) % 3 != 0)
		{
			cout << "NO" << "\n";	
			continue;
		}

		if (x > 2 * y || x * 2 < y)
			cout << "NO" << "\n";

		else
			cout << "YES" << "\n";
			
	}

	return 0;
}*/