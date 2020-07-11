#include <iostream>
using namespace std;
int main()
{
    int x=1;
    int y;
    cout << x << "    " << y << endl;
    y=x++;
    cout << x << " " << y << endl;
    y=++x;
    cout << x << " " << y << endl;
}
