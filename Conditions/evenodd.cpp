#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if( num % 2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    };

    // % = remainder  10 % 2 = 0 //even
    // 11 % 2 = 1 //odd
    return 0;
}