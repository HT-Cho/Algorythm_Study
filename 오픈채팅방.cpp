/*
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <iostream>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    
    map<string, string> userInfo;
    vector<pair<string, string>> CmdLog;
    string Cmd, UID, Name, Log;    
    for (int i = 0; i < record.size(); ++i) 
    {
        Cmd = record[i].substr(0, record[i].find(" "));               
        
        if (Cmd == "Enter" || Cmd == "Change") 
        {
            UID = record[i].substr(record[i].find(" ") + 1, record[i].rfind(" ") - record[i].find(" ") - 1);
            Name = record[i].substr(record[i].rfind(" ") + 1);

            auto it = userInfo.find(UID);

            if (it == userInfo.end())
                userInfo.insert(make_pair(UID, Name));

            else
                it->second = Name;
        }
    
        else 
        {
            UID = record[i].substr(record[i].find(" ") + 1);
        }

        CmdLog.push_back(make_pair(UID, Cmd));
    }

    auto it = CmdLog.begin();

    string log;
    for (it; it != CmdLog.end(); ++it) 
    {
        auto mapit = userInfo.find(it->first);

        log = "";
        if (it->second != "Change") 
        {
            if (it->second == "Enter")
            {
                log += mapit->second;
                log += "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
            }

            else if (it->second == "Leave")
            {
                log += mapit->second;
                log += "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
            }

            answer.push_back(log);
        }
        
    }

    return answer;
}


void main()
{
    vector<string> record = { "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };

    solution(record);
}*/