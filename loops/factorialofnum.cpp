#include <iostream>
using namespace std;

//5! = 1 * 2 * 3 * 4 * 5 = 120
int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int i = 1;
    int factorial = 1;
    while (i <= num){
        factorial *= i;
        cout << "The factorial of " << i << " is " << factorial << endl;
        i++;
    }
    cout << "The factorial of " << num << " is " << factorial << endl;
    return 0;
}