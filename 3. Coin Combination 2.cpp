/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;
/*
n ���� �������� ������ ȭ�� �ý����� �����غ��ʽÿ�. 
�� �������� ���� ���� ���� �ֽ��ϴ�. 
����� �ӹ��� ��� ������ ������ ����Ͽ� �� �հ� x�� ������ ���ִ� ���� �� ������ ���� ����ϴ� ���Դϴ�.

���� ���, ������ {2,3,5}�̰� ���ϴ� �հ谡 9�̸� �� ���� ����� �ֽ��ϴ�.
2 + 2 + 5
3 + 3 + 3
2 + 2 + 2 + 3
�Է�

ù ��° �Է� �ٿ��� �� ���� ���� n�� x�� �ֽ��ϴ� : ���� ���� ���ϴ� �ݾ��Դϴ�.

�� ��° �ٿ��� n ���� ���� �� ���� c1, c2,��, cn (�� ������ ��ġ)�� �ֽ��ϴ�.

����

�ϳ��� ���� (mod 1000000007)�� �μ��մϴ�.

����
1��n��100
1��x��106
1��ci��106

��
�Է�:
3 9
2 3 5

����:
3
* /

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll mod = 1000000007;
	ll nCoinCnt, nTarget;
	cin >> nCoinCnt >> nTarget;
	vector<ll> vec_Coins(nCoinCnt);

	for (int i = 0; i < nCoinCnt; ++i)
	{
		cin >> vec_Coins[i];
	}

	vector<ll> vec_dp(nTarget + 1, 0);
	vec_dp[0] = 1;
	
	return 0;
}
*/