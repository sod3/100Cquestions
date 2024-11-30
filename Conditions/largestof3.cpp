#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter the number 1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;
    cout << "Enter the number 3: ";
    cin >> num3;
    
    if (num1 > num2 && num1 > num3){
        cout << "Num 1 is greatest";
    };
    if (num2 > num1 && num2 > num3){
        cout << "Num 2 is greatest";
    };
    if (num3 > num1 && num3 > num2){
        cout << "Num 3 is greatest";
    };
    return 0;
}