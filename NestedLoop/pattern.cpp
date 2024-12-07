#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){   //rows
        for(int j=1; j<=i; j++){   //columns
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n; i>=1; i--){   // i=4 >= 1     i=i-1
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}