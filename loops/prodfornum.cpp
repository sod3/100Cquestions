#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int i = 1;
    while (i <= 10){
        cout << num << " x " << i << " = " << num * i << endl; 
        i++;
    }
}