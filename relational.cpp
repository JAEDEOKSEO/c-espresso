#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool r1, r2, r3, r4;

    cout << "첫 번째 점수를 입력하시오. : ";
    cin >> x;
    cout << "두 번째 정수를 입력하시오. : ";
    cin >> y;

    r1 = (x == y);
    r2 = (x != y);
    r3 = (x >= y);
    r4 = (x <= y);

    cout.setf(cout.boolalpha);
    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    return 0; 
}