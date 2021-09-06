/*
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;


//��Ʋ�� 09:00���� �� nȸ t�� �������� ���� �����ϸ�, �ϳ��� ��Ʋ���� �ִ� m���� �°��� Ż �� �ִ�.
//��Ʋ�� �������� �� ������ ������ ��⿭�� �� ũ����� �����ؼ� ��� ������� �¿�� �ٷ� ����Ѵ�.
//���� ��� 09 : 00�� ������ ��Ʋ�� �ڸ��� �ִٸ� 09 : 00�� ���� �� ũ�絵 Ż �� �ִ�.

//��Ʋ ���� Ƚ�� n, ��Ʋ ���� ���� t, �� ��Ʋ�� Ż �� �ִ� �ִ� ũ�� �� m, ũ�簡 ��⿭�� �����ϴ� �ð��� ���� �迭 timetable�� �Է����� �־�����.
//���� ������ ��Ʋ�� Ÿ�� �繫�Ƿ� �� �� �ִ� ���� ���� ���� �ð��� ����Ѵ�. ���� �ð��� HH:MM �����̸�, 00:00���� 23:59 ������ ���� �� �� �ִ�.

//	n	t	m				timetable																																answer
//	1	1	5	["08:00", "08:01", "08:02", "08:03"]																												"09:00"
//	2	10	2	["09:10", "09:09", "08:00"]																															"09:09"
//	2	1	2	["09:00", "09:00", "09:00", "09:00"]																												"08:59"
//	1	1	5	["00:01", "00:01", "00:01", "00:01", "00:01"]																										"00:00"
//	1	1	1	["23:59"]																																			"09:00"
//	10	60	45	["23:59","23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59", "23:59"]		"18:00"

string solution(int n, int t, int m, vector<string> timetable) {
    string answer = "";
    int start_t = 540, wait_t = 0, wait_h = 0, wait_m = 0;
    int count = 0;
    bool keep = true;

    sort(timetable.begin(), timetable.end(), greater<string>());

    for (int i = 0; i < n; i++)
    {
        count = 0;

        while (count < m)
        {
            if (!timetable.empty())
            {
                wait_h = stoi(timetable.back().substr(0, 2));
                wait_m = stoi(timetable.back().substr(3, 2));
                wait_t = (60 * wait_h) + wait_m;

                if (wait_t <= start_t)
                {
                    if (i == n - 1 && count == m - 1)
                    {
                        start_t = wait_t - 1;
                        keep = false;
                        break;
                    }
                    else
                    {
                        count++;
                        timetable.pop_back();
                    }
                }
                else
                {
                    if (i == n - 1)
                    {
                        start_t = 540 + (n - 1) * t;
                        keep = false;
                        break;
                    }
                    start_t += t;
                    break;
                }
            }
            else
            {
                start_t = 540 + (n - 1) * t;
                keep = false;
                break;
            }
        }
        if (keep == false)
            break;

        if (count == m)
            start_t += t;
    }

    if (start_t / 60 < 10)
        answer = "0" + to_string(start_t / 60);
    else
        answer = to_string(start_t / 60);

    answer += ":";

    if (start_t % 60 < 10)
        answer += "0" + to_string(start_t % 60);
    else
        answer += to_string(start_t % 60);

    return answer;
}

void main() 
{
    int n = 2, t = 1, m = 2;
    vector<string> timetable = { "09:00", "09:00", "09:00", "09:00" };


    solution(n, t, m, timetable);
}
*/