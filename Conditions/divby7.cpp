#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num % 7 == 0){
        cout << num << " is divisible by 7";
    } else{
        cout << num << " is not divisible by 7";
    }
    return 0;
}