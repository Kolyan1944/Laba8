#include <iostream>
using namespace std;

int main()
{
    int a; int b; int c;
    cin >> a >> b >> c;
    cout << a << " + " << b << " + " << c << " = " << a + b + c << "\n";
    cout << a << " * " << b << " * " << c << " = " << a * b * c << "\n";
    cout << "(" << a << " + " << b << " + " << c << ") / 3 = " << (double)(a + b + c) / 3 << "\n";
}
