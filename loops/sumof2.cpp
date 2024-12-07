#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum, sub, prod, div;
    cout << "Enter the number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "the sum of 2 numbers is: " << sum << endl;
    sub = num1 - num2;
    cout << "the sub of 2 numbers is: " << sub << endl;
    prod = num1 * num2;
    cout << "the prod of 2 numbers is: " << prod << endl;
    div = num1 / num2;
    cout << "the div of 2 numbers is: " << div << endl;
}