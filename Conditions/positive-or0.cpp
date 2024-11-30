#include <iostream>
using namespace std;

int main(){
    int num,p,n,z;
    cout << "Enter the number: ";
    cin >> num;

    if (num > 0){
        cout << "Num is positive";
    };
    if (num < 0){
        cout << "Num is negative";
    };
    if (num == 0){
        cout << "Num is 0";
    };
    return 0;
}