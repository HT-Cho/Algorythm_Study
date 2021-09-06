/*
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int solution(vector<vector<string>> relation) {
    int answer = 0;
    int row = relation.size();
      int column = relation[0].size();
    vector<string> memorize;
    vector<int> permutation;

    for (int i = 0; i < column; i++)
        permutation.push_back(i);

    for (int i = 1; i <= column; i++) {
        pair<set<string>::iterator, bool> ret;
        vector<int> bitMap(column, 0);

        for (int j = 0; j < i; j++) {
            bitMap[j] = 1;
        }
        sort(bitMap.begin(), bitMap.end()); // next_permutation은 sort되어있어야한다는 것 명심!

        do {
            vector<int> columnNum;
            for (int j = 0; j < column; j++) {
                if (bitMap[j] == 1) {
                    columnNum.push_back(permutation[j]);
                }
            }
            if (columnNum.size() == 0)
                break;

            int flag = 1;
            set<string> stringSet;
            for (int j = 0; j < row; j++) {
                string tmpStr = "";
                for (int k = 0; k < columnNum.size(); k++) {
                    tmpStr += relation[j][columnNum[k]];
                }
                ret = stringSet.insert(tmpStr);
                if (ret.second == false) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                string pair;
                for (int j = 0; j < columnNum.size(); j++) {
                    pair += to_string(columnNum[j]);
                }
                flag = 1;
                for (int j = 0; j < memorize.size(); j++) {
                    if (includes(pair.begin(), pair.end(), memorize[j].begin(), memorize[j].end())) { // 포함되어있다면
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    memorize.push_back(pair);
                }
            }
        } while (next_permutation(bitMap.begin(), bitMap.end()));
    }
    answer = memorize.size();
    return answer;
}


void main()
{    
    vector<vector<string>> relation = { {"100","ryan","music","2"} ,
        {"200","apeach","math","2"},
        {"300","tube","computer","3"},
        {"400","con","computer","4"},
        {"500","muzi","music","3"},
        {"600","apeach","music","2"}
    };

    solution(relation);
}*/