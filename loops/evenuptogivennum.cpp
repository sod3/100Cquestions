#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int i = 2;
    while ( i <= num ){
        if(i % 2 == 0){
            cout << i << " is an even number"<< endl;
        }
    i++;
    }
    return 0;
}