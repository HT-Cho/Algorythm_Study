/*
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;


//셔틀은 09:00부터 총 n회 t분 간격으로 역에 도착하며, 하나의 셔틀에는 최대 m명의 승객이 탈 수 있다.
//셔틀은 도착했을 때 도착한 순간에 대기열에 선 크루까지 포함해서 대기 순서대로 태우고 바로 출발한다.
//예를 들어 09 : 00에 도착한 셔틀은 자리가 있다면 09 : 00에 줄을 선 크루도 탈 수 있다.

//셔틀 운행 횟수 n, 셔틀 운행 간격 t, 한 셔틀에 탈 수 있는 최대 크루 수 m, 크루가 대기열에 도착하는 시각을 모은 배열 timetable이 입력으로 주어진다.
//콘이 무사히 셔틀을 타고 사무실로 갈 수 있는 제일 늦은 도착 시각을 출력한다. 도착 시각은 HH:MM 형식이며, 00:00에서 23:59 사이의 값이 될 수 있다.

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