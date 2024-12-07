#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int i=0;
    while(num != 0){
        num /= 10;
        i++;
    }
        cout << i;
    return 0;
}