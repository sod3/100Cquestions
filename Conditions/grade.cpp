#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80){
        cout << "A";
    }else if(marks >= 70 && marks <=80){
        cout << "B";
    }else if(marks >= 60 && marks <=70){
        cout << "C";
    }else if(marks < 50){
        cout << "F";
    }
    return 0;
}