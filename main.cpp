#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b, max, min;
    max=0;
    min=0;
    cin >> a >> b;
    cout << a << " " << b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    if (a+b>max)
        max=a+b;
    else if (a*b>max)
        max=a*b;
    cout << max << '\n';
return 0;
}
