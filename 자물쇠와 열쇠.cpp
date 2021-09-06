/*
#include <iostream>
#include <vector>
using namespace std;

/*
	요거시 90도 시계방향 회전
	(1, 0) -> (0, 2) -> (1, 2) -> (2, 1)
	(2, 2) -> (2, 0) -> (0, 0) -> (0, 2)

	열쇠 돌기랑 자물쇠 돌기는 만나면 안됨
	회전해서 상하좌우 맞춰보고 리턴?(DFS)??

* /

vector<vector<int>> rotate_Key(vector<vector<int>> key)
{	
	int n = key.size();
	int m = key[0].size();

	vector<vector<int>> new_Key(n, vector<int>(m, 0));

	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < m; ++j) 
		{
			new_Key[j][n - i - 1] = key[i][j];
		}
	}

	return new_Key;
}

bool Check(vector<vector<int>> new_lock) 
{
	int lock_len = new_lock.size() / 3;

	for (int i = lock_len; i < lock_len * 2; ++i) 
	{
		for (int j = lock_len; j < lock_len * 2; ++j) 
		{
			if (new_lock[i][j] != 1)
				return false;
		}
	}

	return true;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) 
{
	bool answer = false;

	int n, m;
	n = lock.size();
	m = key.size();

	vector<vector<int>> new_lock(n * 3, vector<int>(n * 3, 0));
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < n; ++j) 
		{
			new_lock[i + n][j + n] = lock[i][j];
		}
	}

	for (int k = 0; k < 4; ++k) 
	{
		key = rotate_Key(key);
		for (int x = 0; x < n * 2; ++x) 
		{
			for (int y = 0; y < n * 2; ++y) 
			{
				for (int i = 0; i < m; ++i) 
				{
					for (int j = 0; j < m; ++j) 
					{
						new_lock[x + i][y + j] += key[i][j];
					}
				}

				if (Check(new_lock))
					return true;

				else 
				{
					for (int i = 0; i < m; ++i) 
					{
						for (int j = 0; j < m; ++j) 
						{
							new_lock[x + i][y + j] -= key[i][j];
						}
					}
				}
			}
		}
	}

	return false;
}

int main() 
{

	vector<vector<int>> key(3, vector<int>(3, 0));
	vector<vector<int>> lock(3, vector<int>(3, 1));
	key[1][0] = 1;
	key[2][1] = 1;
	key[2][2] = 1;

	lock[1][2] = 0;
	lock[2][1] = 0;

	if (solution(key, lock))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	int ntmp;
	cin >> ntmp;

	return 0;
}*/