#include <iostream>
using namespace std;
int sum (int a, int b){
    a++;
    b++;
    cout << "Boba" << endl;
    return a+b; 
}

float sum (float a, float b){
    cout << "Tea" << endl;
    return a+b;
}

int main(){
    int a = 1;
    int b = 2;
    int c = sum(a,b);
    cout << a << " " << b << " " << c << endl;
    float d = 1;
    float e = 2;
    float f = sum(d,e);
    cout << d << " " << e << " " << f << endl;
}
