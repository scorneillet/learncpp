#include <iostream>
using namespace std;
#if 0
int bound = 1024;
int total = 11;
#else
int bound = 128;
int total = 8;
#endif

bool guess (int a){
    if (a < 1 && a > bound) {
        cout << "Invalid Number" << endl;
        return false;
    }
    cout << "If you guess more than 10 times, you lose." << endl;
    cout << "Hint: Use Binary Search" << endl;
    int count = 0; 
    while (true){
        int n;
        cout << "Input a Number" << endl;
        cin >> n;
        count ++; 
        if (n==a){
            cout << "Your guess is right" << endl;
            break;
        }
        else if (n>a){
            cout << "Your guess is too big" << endl;
        }
        else {
            cout << "Your guess is too small" << endl;
        }
    }
    cout << "You guessed the number in " << count << " times" << endl;
    if (count < total){
        return true;
    }
    return false;
}

int main(){
    bool win;
    win = guess(58);
    if (win) {
        cout << "You Win!" << endl;
    }
    else {
        cout << "You Lose!" << endl;
    }
}
