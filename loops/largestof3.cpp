#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "Enter number1: "; 
    cin>>num1;
    cout << "Enter number2: "; 
    cin>>num2;
    cout << "Enter number3: "; 
    cin>>num3;
    if (num1 > num3 && num1 > num2){
        cout << "largest number is: " << num1 << endl;
    }else if(num2 > num3 && num2 > num1){
        cout << "largest number is: " << num2 << endl;
    }else if(num3 > num2 && num3 > num1){
        cout << "largest number is: " << num3 << endl;
    }
    return 0;
}