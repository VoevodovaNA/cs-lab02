#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << a << " " << b;
    cout << "A + B = " << a + b << '\n';
    max=1;
    if (a+b>max)
        max=a+b;
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    if (a*b>max)
        max=a*b;
    cout << "A / B = " << a / b << '\n';
    cout << max << '\n';
return 0;
}
