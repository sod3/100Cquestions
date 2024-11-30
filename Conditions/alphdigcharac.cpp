#include <iostream>
using namespace std;

int main(){
    char character;

    cout << "Enter any character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z'){
        cout << "Character is an alphabet.";
    }else if (character >= '0' && character <= '9'){
        cout << "Character is a digit.";
    }else {
        cout << "Character is a special character.";
    };
    return 0;
}
