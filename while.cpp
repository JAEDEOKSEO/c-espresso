//while문을 이용한 구구단 출력 프로그램
#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 1;

    cout << "구구단 중에서 출력하고 싶은 단을 입력하시오 : ";
    cin >> n;
    while (i <= 9)
    {
        cout << n << "*" << i << "=" << n * i << endl;
        i++;
    }
    return 0;
}