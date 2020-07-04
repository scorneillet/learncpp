#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Input 2 numbers:" << endl;
    cin >> a >> b;
    cout << a << " " << b << endl;

    int c=a+b;
    cout << "Sum is " << c << endl;

    c=a-b;
    cout << "Diffrence is " << c << endl;

    c=a*b;
    cout << "Product is " << c << endl;

    c=a/b;
    cout << "Quotient is " << c << endl;

    c=a%b;
    cout << "Remainder is " << c << endl;

    a++;
    cout << "New a is " << a << endl;

    b--;
    cout << "New b is " << b << endl;

    c++;
    cout << "New c is " << c << endl;

}
