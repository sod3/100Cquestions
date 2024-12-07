#include<iostream>
using namespace std;

bool is_Prime(int n){
    for(int i=2; i<n; i++)
        if(n%i == 0){
            return false;
    }
    return true;
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(is_Prime(num))
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}

