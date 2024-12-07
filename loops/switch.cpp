#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum, sub, prod, div;
    char op;
    cout << "Enter the number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "enter the operator ( +, -, *, /): ";
    cin >> op;

    switch(op){
        case '+':
            sum = num1 + num2;
            cout << sum;
            break;
        case '-':
            sub = num1 - num2;
            cout << sub;
            break;
        case '*':
            prod = num1 * num2;
            cout << prod;
            break;
        case '/':
            if (num2 != 0) {
                div = num1 / num2;
                cout << div;
            } else {
                cout << "Error: Division by zero";
            }
            break;
        default:
            cout << "no such operator";
    }
    return 0;
}