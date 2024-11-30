#include <iostream>
using namespace std;

int main(){
    int range;

    cout << "Enter the number from 1 to 100: ";
    cin >> range;
    if (range >= 1 && range <= 100){
        cout << "range is within 1 to 100";
    } else {
        cout << "range is not within 1 to 100";
    }
    return 0;
}
