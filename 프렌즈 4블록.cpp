/*
#include <string>
#include <vector>

using namespace std;

bool comp(vector<pair<char, bool>>& tmp, int _nParam)
{
    for (int i = 0; i < tmp.size(); ++i) 
    {
        if (tmp[i].first == ' ')
            continue;

        pair<char, bool> up, down, left, right, rUp, rDown, lUp, lDown, me = tmp[i];

        if (i < _nParam == false)
            up = tmp[i - _nParam];

        if (i % _nParam != 0)
            left = tmp[i - 1];

        if ((i + 1) % _nParam != 0)
            right = tmp[i + 1];

        if (i + _nParam >= tmp.size() == false)
            down = tmp[i + _nParam];

        if (up.first != NULL) 
        {
            if(right.first != NULL)
                rUp = tmp[i - _nParam + 1];

            if (left.first != NULL)
                lUp = tmp[i - _nParam - 1];
        }
            
        if (down.first != NULL) 
        {
            if (right.first != NULL)
                rDown = tmp[i + _nParam + 1];

            if (left.first != NULL)
                lDown = tmp[i + _nParam - 1];
        }
        
        if (me.first == right.first && me.first == rDown.first && me.first == down.first)
        {
            tmp[i].second = true;
            tmp[i + 1].second = true;
            tmp[i + _nParam].second = true;
            tmp[i + _nParam + 1].second = true;
        }

        if (me.first == right.first && me.first == rUp.first && me.first == up.first)
        {
            tmp[i].second = true;
            tmp[i + 1].second = true;
            tmp[i - _nParam].second = true;
            tmp[i - _nParam + 1].second = true;            
        }

        if (me.first == left.first && me.first == lUp.first && me.first == up.first)
        {
            tmp[i].second = true;
            tmp[i - 1].second = true;
            tmp[i - _nParam - 1].second = true;
            tmp[i - _nParam].second = true;
        }

        if (me.first == left.first && me.first == lDown.first && me.first == down.first)
        {
            tmp[i].second = true;
            tmp[i - 1].second = true;
            tmp[i + _nParam - 1].second = true;
            tmp[i + _nParam].second = true;
        }
    }


    return false;
}


int delBlock(vector<pair<char, bool>>& tmp) 
{
    int nCnt = 0;

    for (int i = 0; i < tmp.size(); ++i) 
    {
        if (tmp[i].second == true) 
        {
            tmp[i].first = ' ';            
            nCnt++;
        }
    }

    return nCnt;
}

bool MoveBlock(int _nParam, int _nMin, vector<pair<char, bool>>&tmp)
{
    for (int i = tmp.size() - 1; i >= 0; i--) 
    {
        if (tmp[i].first == ' ' && i >= _nMin)
        {
            for (int j = i - _nMin; j >= 0; j -= _nMin) 
            {
                if (tmp[j].first != ' ') 
                {
                    tmp[i].first = tmp[j].first;
                    tmp[j].first = ' ';

                    break;
                }
            }            
        }

        tmp[i].second = false;
    }   

    return true;
}


int solution(int m, int n, vector<string> board) {
    int answer = 0;

    vector<pair<char, bool>> tmp;

    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            tmp.push_back(make_pair(board[i][j], false));
        }
    }

    bool bKeep, bMove;

    int nCnt = 0, nSum = 0;

    while (true)
    {
        nCnt = 0;

        comp(tmp, n);
        nCnt = delBlock(tmp);

        if (nCnt == 0)
            break;

        answer += nCnt;
        MoveBlock(0, n, tmp);

    }

    return answer;
}

void main() 
{
    int m = 6, n = 2;
    vector<string> board = { "DD", "CC", "AA", "AA", "CC", "DD" };

    solution(m, n, board);
}*/