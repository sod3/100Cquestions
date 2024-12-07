#include <iostream>
using namespace std;

//5! = 1 * 2 * 3 * 4 * 5 = 120
//6! = 1 * 2 * 3 * 4 * 5 * 6 = 720
//3! = 1 * 2 * 3 = 6
//10 = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 3628800
int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
// =  == != > >= < <=

// += means add and assign

    int factorial = 1;
    int i = 1; //5
    while (i <= num){
        factorial = factorial * i;  //factorial = factorial * i;
        cout << "The factorial of " << i << " is " << factorial << endl;
        i++;
    }

    // for (int i = 1; i <= num; i++){
    //     factorial = factorial * i; 
    // }
    cout << "The factorial of " << num << " is " << factorial << endl;
    return 0;
}