#include <iostream>
using namespace std;

int main(){
    int num, max_digit = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0){
        int digit = num % 10;
        if (digit > max_digit)
            max_digit = digit;
        num /= 10;
    }
    cout << "Largest digit: " << max_digit << endl;
    return 0;
}