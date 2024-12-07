#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i=2;
    while(i<=n){
        int j=2;
        while(j<i){
            if(i%j == 0){
                break;
            }
            j++;
        }
        if(j==i){
            cout << i << " ";
        }
        i++;
    }
    return 0;
}