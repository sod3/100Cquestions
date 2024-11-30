#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int i;
    while(i <= num){
        if (!(i % 2 == 0)){
            cout << i << " is an odd number" << endl;
        };
    i++;
    }
    return 0;
}