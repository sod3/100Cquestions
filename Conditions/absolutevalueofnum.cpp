#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    if (num < 0) {
        cout << "The absolute value of " << num << " is " << -num << endl;
    } else {
        cout << "The absolute value of " << num << " is " << num << endl;
    }
    return 0;
}