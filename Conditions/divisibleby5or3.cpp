#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num % 5 ==0 && num % 3 ==0){
        cout << "Number is divisible by both 5 and 3";
    }else {
        cout << "Number is not divisible by both 5 and 3";
    };
    return 0;
}