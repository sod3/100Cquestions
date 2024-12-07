#include <iostream>
using namespace std;

long DigitCount(long long n){
    int count = 0;
    while(n != 0){ 
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    long long num;
    while (-1) {
        cout << "Enter the number (-1 to exit): ";
        cin >> num;
        if (num == -1) {
            break;
        }
        cout << "Number of digits: " << DigitCount(num) << endl;
    }
    return 0;
}
