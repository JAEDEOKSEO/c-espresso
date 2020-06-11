#include <iostream>

using namespace std;

int main()
{
    int vowel = 0, consonent = 0;
    char ch;

    cout << "영문자를 입력하고 콘트롤-Z를 치세요" << endl;
    while (cin >> ch)
    {
        switch (ch)
        {
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'u':
            break;
        default:
            consonent++;
            break;
        }
    }
    cout << "모음 : " << vowel << endl;

    return 0;
}