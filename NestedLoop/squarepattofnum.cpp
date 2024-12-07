#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";  //5
    cin >> num;

    for(int i = 1; i <= num; i++){    //i = 1 < 5     // rows
        for(int j = 1; j <= num; j++){   // j = 1 < 5   // columns
            cout << "*" << " ";  // 
        }
        cout << endl;
    }
    return 0;
}