//소문자를 대문자로 변경.
#include <iostream>

using namespace std;

int main()
{
    char letter;

    while (1)
    {
        cout << "소문자를 입력하시오. : ";
        cin >> letter;                          //공백 문자 제외

        if (letter == 'Q')
        {
            break;
        }
        if (letter < 'a' || letter > 'z')
        {
            continue;
        }

        letter -= 32;
        cout << "변환된 대문자는" << letter << "입니다.\n";
    }
    return 0;
}