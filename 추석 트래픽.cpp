
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;

int solution(vector<string> lines) {
    int answer = 0;

    vector<pair<long long, long long>> vecLog;

    long long Year, Month, Day, Hour, Minute, Second, MiliSec;
    long long StartTime, elapsTime, EndTime;
    //"2016-09-15 20:59:58.233 1.181s"
    string strComplete, strElapsed, strTmp;
    for (int i = 0; i < lines.size(); ++i) 
    {
        Year = (stoll(lines[i].substr(0, 4)) * 365 * 24 * 60 * 60) * 1000;
        Month = (stoll(lines[i].substr(5, 2)) * 30 * 24 * 60 * 60) * 1000;
        Day = (stoll(lines[i].substr(8, 2)) * 24 * 60 * 60) * 1000;
        Hour = (stoll(lines[i].substr(11, 2)) * 3600) * 1000;
        Minute = (stoll(lines[i].substr(14, 2)) * 60) * 1000;
        Second = (stoll(lines[i].substr(17, 2))) * 1000;
        MiliSec = stoll(lines[i].substr(20, 3));

        EndTime = Year + Month + Day + Hour + Minute + Second + MiliSec;
        EndTime = Hour + Minute + Second + MiliSec;

        //strComplete = lines[i].substr(0, lines[i].rfind(' '));
        strElapsed = lines[i].substr(lines[i].rfind(' ') + 1, (lines[i].length() - 1) - (lines[i].rfind(' ') + 1));     

       // EndTime = stoll(strTmp);
        elapsTime = stold(strElapsed) * 1000;
        StartTime = EndTime - elapsTime + 1;

        vecLog.push_back(make_pair(StartTime, EndTime));
    }
    
    //sort(vecLog.begin(), vecLog.end());
    
    int nNow;    
    for (int i = 0; i < vecLog.size(); ++i) 
    {
        StartTime = vecLog[i].first;
        EndTime = vecLog[i].second;
        nNow = 1;
        for (int j = i + 1; j < vecLog.size(); ++j) 
        {
            if (StartTime + 1000 >= vecLog[j].first || EndTime + 1000 > vecLog[j].first)
                nNow++;
        }

        answer = max(answer, nNow);
    } 

    return answer;
}

void main()
{
    vector<string> record = { "2016-09-15 20:59:57.421 0.351s", "2016-09-15 20:59:58.233 1.181s", "2016-09-15 20:59:58.299 0.8s", "2016-09-15 20:59:58.688 1.041s", "2016-09-15 20:59:59.591 1.412s", "2016-09-15 21:00:00.464 1.466s", "2016-09-15 21:00:00.741 1.581s", "2016-09-15 21:00:00.748 2.31s", "2016-09-15 21:00:00.966 0.381s", "2016-09-15 21:00:02.066 2.62s" };

    

    solution(record);
}