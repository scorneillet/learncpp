#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter Number";
    cin >> grade;
        if (grade==0)
    { cout << "Your input is 0" << endl;

    }
    else if (grade>0)
        cout << "Your input is more than 0" << endl;
    else
        cout << "Your input is less than 0" << endl;

}
