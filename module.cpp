#include <iostream>

using namespace std;

int main()
{
    int input, minute, second;
    const int SEC_PER_MINUTE = 60;
    
    cout << "초단위의 시간을 입력하세요 : (32억초이하)";
    cin >> input; //초단위의 시간을 읽는다.

    minute = input / SEC_PER_MINUTE; //몇 분
    second = input % SEC_PER_MINUTE; //몇 초

    cout << input << "초는" << minute << "분" << second << "초 입니다." << endl;

    return 0;
}