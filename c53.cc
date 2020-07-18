#include <iostream>
using namespace std;

float c,f;
void convert(){
    c = (f-32)*5/9;
}

int main(){
    cout << "Input the temperature in Farenheit:" << endl;
    cin >> f;
    convert();
    cout << "This this the temperature in Celsius:" 
      << " " << c << endl;
    //The line above was too long
}
