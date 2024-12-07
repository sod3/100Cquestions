#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;  //1234

    int i=0;  //0, 
    while(num != 0){
        num /= 10;  //123 , 12 , 1 , 0
        i++; // 1 , 2, 3 , 4
    }
        cout << i;
    return 0;
}