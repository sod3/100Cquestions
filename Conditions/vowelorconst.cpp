#include <iostream>
using namespace std;

int main(){
    char letter;

    cout << "Enter any letter: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout << "Vowel";
    }else {
        cout << "Constant";
    };
    return 0;
}
