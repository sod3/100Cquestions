#include <iostream>
using namespace std;

//sum of three angles = 180
int main(){
    int angle1, angle2, angle3;
    cout << "type the angle1: ";
    cin >> angle1;
    cout << "type the angle2: ";
    cin >> angle2;
    cout << "type the angle3: ";
    cin >> angle3;
    if (angle1 + angle2 + angle3 == 180){
        cout << "Triangle is valid.";
    }else{
        cout << "Not a triangle";
    }
    return 0;
}