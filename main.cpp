#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b, max, min;
    cin >> a >> b;
    cout << a << " " << b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
	
	max=a+b;
    if (a*b>max)
        max=a*b;
    cout << max << '\n';
    
	min=a-b;
    if (a/b<min)
    	min=a/b;
    cout << min << '\n';
return 0;
}
