/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> vec_Tmp, vec_Tmp2;
   
    for (int i = 1; i < str1.length(); ++i)
    {
        string TwoWords;

        if (isalpha(str1[i - 1]) && isalpha(str1[i])) 
        {
            TwoWords.push_back(tolower(str1[i - 1]));
            TwoWords.push_back(tolower(str1[i]));
            vec_Tmp.push_back(TwoWords);
        }
    }

    for (int i = 1; i < str2.length(); ++i)
    {
        string TwoWords;

        if (isalpha(str2[i - 1]) && isalpha(str2[i]))
        {
            TwoWords.push_back(tolower(str2[i - 1]));
            TwoWords.push_back(tolower(str2[i]));
            vec_Tmp2.push_back(TwoWords);
        }        
    }

    sort(vec_Tmp.begin(), vec_Tmp.end());
    sort(vec_Tmp2.begin(), vec_Tmp2.end());

    vector<string> vec_union, vec_intersection;
    set_union(vec_Tmp.begin(), vec_Tmp.end(), vec_Tmp2.begin(), vec_Tmp2.end(), back_inserter(vec_union));
    set_intersection(vec_Tmp.begin(), vec_Tmp.end(), vec_Tmp2.begin(), vec_Tmp2.end(), back_inserter(vec_intersection));

    if (vec_union.empty() && vec_intersection.empty())
        answer = 65536;

    else
        answer = ((double)vec_intersection.size() / (double)vec_union.size()) * 65536;

    return answer;
}

void main()
{
    string str1, str2;

    str1 = "FRANCE";
    str2 = "french";

    solution(str1, str2);
}
*/