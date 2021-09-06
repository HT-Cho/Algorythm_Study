/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

/*
���� ����
īī���� �Ի��� ���� ������ �׿��� "īī������������"�� ��ġ�Ǿ�, īī�� ���񽺿� �����ϴ� �������� ���̵� �����ϴ� ������ ����ϰ� �Ǿ����ϴ�.
"�׿�"���� �־��� ù ������ ���� �����ϴ� �������� īī�� ���̵� ��Ģ�� ���� �ʴ� ���̵� �Է����� ��, �Էµ� ���̵�� �����ϸ鼭 ��Ģ�� �´� ���̵� ��õ���ִ� ���α׷��� �����ϴ� ���Դϴ�.
������ īī�� ���̵��� ��Ģ�Դϴ�.

���̵��� ���̴� 3�� �̻� 15�� ���Ͽ��� �մϴ�.
���̵�� ���ĺ� �ҹ���, ����, ����(-), ����(_), ��ħǥ(.) ���ڸ� ����� �� �ֽ��ϴ�.
��, ��ħǥ(.)�� ó���� ���� ����� �� ������ ���� �������� ����� �� �����ϴ�.
"�׿�"�� ������ ���� 7�ܰ��� �������� ó�� ������ ���� �ű� ������ �Է��� ���̵� īī�� ���̵� ��Ģ�� �´� �� �˻��ϰ� ��Ģ�� ���� ���� ��� ��Ģ�� �´� ���ο� ���̵� ��õ�� �ַ��� �մϴ�.
�ű� ������ �Է��� ���̵� new_id ��� �Ѵٸ�,

1�ܰ� new_id�� ��� �빮�ڸ� �����Ǵ� �ҹ��ڷ� ġȯ�մϴ�.
2�ܰ� new_id���� ���ĺ� �ҹ���, ����, ����(-), ����(_), ��ħǥ(.)�� ������ ��� ���ڸ� �����մϴ�.
3�ܰ� new_id���� ��ħǥ(.)�� 2�� �̻� ���ӵ� �κ��� �ϳ��� ��ħǥ(.)�� ġȯ�մϴ�.
4�ܰ� new_id���� ��ħǥ(.)�� ó���̳� ���� ��ġ�Ѵٸ� �����մϴ�.
5�ܰ� new_id�� �� ���ڿ��̶��, new_id�� "a"�� �����մϴ�.
6�ܰ� new_id�� ���̰� 16�� �̻��̸�, new_id�� ù 15���� ���ڸ� ������ ������ ���ڵ��� ��� �����մϴ�.
     ���� ���� �� ��ħǥ(.)�� new_id�� ���� ��ġ�Ѵٸ� ���� ��ġ�� ��ħǥ(.) ���ڸ� �����մϴ�.
7�ܰ� new_id�� ���̰� 2�� ���϶��, new_id�� ������ ���ڸ� new_id�� ���̰� 3�� �� ������ �ݺ��ؼ� ���� ���Դϴ�.
���� ���, new_id ���� "...!@BaT#*..y.abcdefghijklm" ���, �� 7�ܰ踦 ��ġ�� ���� new_id�� �Ʒ��� ���� ����˴ϴ�.

1�ܰ� �빮�� 'B'�� 'T'�� �ҹ��� 'b'�� 't'�� �ٲ�����ϴ�.
"...!@BaT#*..y.abcdefghijklm" �� "...!@bat#*..y.abcdefghijklm"

2�ܰ� '!', '@', '#', '*' ���ڰ� ���ŵǾ����ϴ�.
"...!@bat#*..y.abcdefghijklm" �� "...bat..y.abcdefghijklm"

3�ܰ� '...'�� '..' �� '.'�� �ٲ�����ϴ�.
"...bat..y.abcdefghijklm" �� ".bat.y.abcdefghijklm"

4�ܰ� ���̵��� ó���� ��ġ�� '.'�� ���ŵǾ����ϴ�.
".bat.y.abcdefghijklm" �� "bat.y.abcdefghijklm"

5�ܰ� ���̵� �� ���ڿ��� �ƴϹǷ� ��ȭ�� �����ϴ�.
"bat.y.abcdefghijklm" �� "bat.y.abcdefghijklm"

6�ܰ� ���̵��� ���̰� 16�� �̻��̹Ƿ�, ó�� 15�ڸ� ������ ������ ���ڵ��� ���ŵǾ����ϴ�.
"bat.y.abcdefghijklm" �� "bat.y.abcdefghi"

7�ܰ� ���̵��� ���̰� 2�� ���ϰ� �ƴϹǷ� ��ȭ�� �����ϴ�.
"bat.y.abcdefghi" �� "bat.y.abcdefghi"

���� �ű� ������ �Է��� new_id�� "...!@BaT#*..y.abcdefghijklm"�� ��, �׿��� ���α׷��� ��õ�ϴ� ���ο� ���̵�� "bat.y.abcdefghi" �Դϴ�.

[����]
�ű� ������ �Է��� ���̵� ��Ÿ���� new_id�� �Ű������� �־��� ��, "�׿�"�� ������ 7�ܰ��� ó�� ������ ��ģ ���� ��õ ���̵� return �ϵ��� solution �Լ��� �ϼ��� �ּ���.

[���ѻ���]
new_id�� ���� 1 �̻� 1,000 ������ ���ڿ��Դϴ�.
new_id�� ���ĺ� �빮��, ���ĺ� �ҹ���, ����, Ư�����ڷ� �����Ǿ� �ֽ��ϴ�.
new_id�� ��Ÿ�� �� �ִ� Ư�����ڴ� -_.~!@#$%^&*()=+[{]}:?,<>/ �� �����˴ϴ�.

[����� ��]
no	new_id	result
��1	"...!@BaT#*..y.abcdefghijklm"	"bat.y.abcdefghi"
��2	"z-+.^."	"z--"
��3	"=.="	"aaa"
��4	"123_.def"	"123_.def"
��5	"abcdefghijklmn.p"	"abcdefghijklmn"
����� ���� ���� ����
����� �� #1
������ ���ÿ� �����ϴ�.

����� �� #2
7�ܰ踦 ��ġ�� ���� new_id�� ��ȭ�ϴ� ������ �Ʒ��� �����ϴ�.

1�ܰ� ��ȭ �����ϴ�.
2�ܰ� "z-+.^." �� "z-.."
3�ܰ� "z-.." �� "z-."
4�ܰ� "z-." �� "z-"
5�ܰ� ��ȭ �����ϴ�.
6�ܰ� ��ȭ �����ϴ�.
7�ܰ� "z-" �� "z--"

����� �� #3
7�ܰ踦 ��ġ�� ���� new_id�� ��ȭ�ϴ� ������ �Ʒ��� �����ϴ�.

1�ܰ� ��ȭ �����ϴ�.
2�ܰ� "=.=" �� "."
3�ܰ� ��ȭ �����ϴ�.
4�ܰ� "." �� "" (new_id�� �� ���ڿ��� �Ǿ����ϴ�.)
5�ܰ� "" �� "a"
6�ܰ� ��ȭ �����ϴ�.
7�ܰ� "a" �� "aaa"

����� �� #4
1�ܰ迡�� 7�ܰ���� ��ġ�� ���� new_id("123_.def")�� ������ �ʽ��ϴ�. ��, new_id�� ó������ īī���� ���̵� ��Ģ�� �½��ϴ�.

����� �� #5
1�ܰ� ��ȭ �����ϴ�.
2�ܰ� ��ȭ �����ϴ�.
3�ܰ� ��ȭ �����ϴ�.
4�ܰ� ��ȭ �����ϴ�.
5�ܰ� ��ȭ �����ϴ�.
6�ܰ� "abcdefghijklmn.p" �� "abcdefghijklmn." �� "abcdefghijklmn"
7�ܰ� ��ȭ �����ϴ�.
* /

bool isVal(char ch) 
{
    if (ch == '.')
        return true;

    else
        return false;
}

string DeleteDot(string answer) 
{
    auto it = answer.begin();
    if (*it == '.')
        answer.erase(it);

    auto rit = answer.rbegin();
    if (*rit == '.')
        answer.erase(answer.end() - 1);

    return answer;
}

string solution(string new_id) {
    string answer = "";       

    for (int i = 0; i < new_id.length(); ++i) 
    {
        if (isalpha(new_id[i]))
            new_id[i] = tolower(new_id[i]);

        if (isdigit(new_id[i]) || isalpha(new_id[i]) || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            answer.push_back(new_id[i]);
        }
    }
    
    char c = '.';
    answer.erase(std::unique(std::begin(answer), std::end(answer),
        [=](const auto& c1, const auto& c2) { return c1 == c && c1 == c2; }),
        std::end(answer));

    answer = DeleteDot(answer);

    if (answer.empty())
        answer += 'a';

    if (answer.length() >= 16)
        answer.resize(15);   

    answer = DeleteDot(answer);
            
    if (answer.length() <= 2) 
    {
        auto it = answer.rbegin();
        while (answer.length() != 3)
        {
            answer += *it;
        }
    }

    return answer;
}

void main()
{
    string id = "...!@BaT#*..y.abcdefghijklm";

    cout << solution(id) << "\n";
}*/