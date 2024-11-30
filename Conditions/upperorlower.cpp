#include <iostream>
using namespace std;

int main(){
    char character;
    cout << "Enter the character: ";
    cin >> character;
    if (character >= 'a' && character <= 'z'){
        cout << "Lowercase character";
    }else if(character >= 'A' && character <= 'Z'){
        cout << "Uppercase character";
    }
    return 0;
}
