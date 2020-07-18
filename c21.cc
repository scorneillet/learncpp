#include    <iostream>
using namespace std;

int main(){
    int x,y,z;
    x = 1;
    cin >> x;
    cout << sizeof(x) << "x:" << x << endl;
    char ab;
    ab = 2;
    cin >> ab;
    cout << sizeof(ab) << "ab:" << ab << endl;
    float c;
    c = 3;
    cin >> c;
    cout << sizeof(c) << "c:" << c <<  endl;
    double d;
    d = 4;
    cin >> d;
    cout << sizeof(d) << "d:" << d << endl;
    bool e;
    e = 5;
    cin >> e;
    cout << sizeof(e) << "e:" << e << endl;
    
}
