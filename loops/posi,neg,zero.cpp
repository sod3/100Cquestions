#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num > 0){
        cout << "Positive";
    }else if(num < 0){
        cout << "Neg";
    }else if(num == 0){
        cout << "zero";
    }
    return 0;
}