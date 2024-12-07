#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num; //8  7
    int i=2; 
    while(i<num){
        if(num%i == 0){  //8%2 == 0  7%2 == 1
            cout << "Not prime";
            break;
        }
        i++;
    }
    if(i==num){
        cout << "Prime";
    }
    return 0;
}