#include <iostream>
using namespace std;

int peri(int l, int w){
    int p = (l+w)*2;
    return p;
}

int area(int l, int w){
    return l*w;
}

int main(){
    int w;
    cout << "Input a number:" << endl;
    cin >> w;

    int l;
    cout << "Input another number:" << endl;
    cin >> l;

    int p = peri (l,w);
    cout << "This is the perimeter:" << endl;
    cout << p << endl;


    int a = area(l,w);
    cout << "This is your area:" << endl;
    cout << a << endl;
}
