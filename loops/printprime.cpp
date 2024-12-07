#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: "; //100
    cin >> n;
    int i=2;
    while(i<=n){ // 3 <= 100
        int j=2;
        while(j<i){ // 2<2 
            if(i%j == 0){ 
                break;
            }
            j++;
        }
        // this will only execute when j==i means i is prime
        if(j==i){ // 2==2
            cout << i << " ";
        }
        i++; //3
    }
    return 0;
}