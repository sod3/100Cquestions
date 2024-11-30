#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 12){
        cout << "You are a child";
    }
    if (age > 12 && age <= 40){
        cout << "You are an adult";
    }
    if (age > 40){
        cout << "You are senior";
    };
    return 0;
}