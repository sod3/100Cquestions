#include <iostream>
using namespace std;

int main(){
    int num, threshold = 30;
    cout << "Enter you number: ";
    cin >> num;

    if (num > threshold){
        cout << "Number is greater than specific threshold";
    }else{
        cout << "Number is not greater than specific threashold";
    };
    return 0;
}