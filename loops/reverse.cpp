#include <iostream>
using namespace std;

//123 output=321 
int main(){
    int num, rev, rem;
    cout << "Enter the number: ";
    cin >> num;

    int i;
    while (num != 0){
        rem = num % 10; // remender = 3  
        cout << "Remender is " << rem << endl;
        rev = rev * 10 + rem; // reversed = 3
        cout << "Reversed is " << rev << endl;
        num = num/10; // number = 12
        cout << "Num is "<< num << endl;
    }
    cout << "Reversed Number"<< " is "<< rev;
    return 0;
}

//123

// in first loop:
// rem = 3 , rev = 3, num = 12
// second loop:
// rem = 2 , rev = 32, num = 1
// third loop:
// rem = 1 , rev = 321, num = 0
