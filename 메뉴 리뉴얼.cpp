/*
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;

    for (int i = 0; i < orders.size(); ++i) 
    {
         sort(orders[i].begin(), orders[i].end());
    }

    string target, tmp;   
    map<string, int> map_resultTmp;
    vector<pair<string, int>> vec_ResultTmp;
    map<int, vector<pair<string, int>>> map_Result;
    while (!course.empty()) 
    {
        auto it = course.begin();
        int nlength = course[0];

        for (int i = 0; i < orders.size(); ++i) 
        {
            if (orders[i].length() >= nlength) 
            {                
                target = orders[i];
                vector<int> vec_Tmp(target.length(), 0);

                for (int j = 0; j < nlength; ++j)
                {
                    vec_Tmp[j] = 1;
                }
                
                sort(vec_Tmp.begin(), vec_Tmp.end());

                do
                {
                    for (int j = 0; j < vec_Tmp.size(); ++j) 
                    {
                        if (vec_Tmp[j] == 1)
                            tmp += target[j];
                    }                    
                
                    int nCnt = 0;
                    for (int j = 0; j < orders.size(); ++j) 
                    {
                        if (includes(orders[j].begin(), orders[j].end(), tmp.begin(), tmp.end()))
                            nCnt++;                       
                    }   

                    
                    if (nCnt >= 2) 
                    {
                        if (vec_ResultTmp.empty())
                            vec_ResultTmp.push_back(make_pair(tmp, nCnt));                        

                        else 
                        {                            
                            if (nCnt > vec_ResultTmp.begin()->second) 
                            {
                                vec_ResultTmp.clear();
                                vec_ResultTmp.push_back(make_pair(tmp, nCnt));
                            }

                            else if(nCnt == vec_ResultTmp.begin()->second)
                                vec_ResultTmp.push_back(make_pair(tmp, nCnt));                           
                        }
                    }
                    
                    tmp.clear();

                } while (next_permutation(vec_Tmp.begin(), vec_Tmp.end()));                
            }            
        }

        for (int j = 0; j < vec_ResultTmp.size(); ++j) 
        {
            answer.push_back(vec_ResultTmp[j].first);
        }

        vec_ResultTmp.clear();

        course.erase(it);
    }    

    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    return answer;    
}

void main() 
{
    vector<string> orders = { "ABCDE", "BA", "CD", "ADE", "XYZ", "XYZ", "ACD" };
    vector<int> course = { 2,3,5 };

    solution(orders, course);
}
*/