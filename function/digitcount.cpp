#include <iostream>
using namespace std;

long DigitCount(long long n){
    int count = 0;
    while(n != 0){ 
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    long long num;
    cout << "Enter the number: ";
    cin >> num;
    cout << DigitCount(num);
    return 0;
}