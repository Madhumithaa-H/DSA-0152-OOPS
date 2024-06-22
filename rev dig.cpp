#include <iostream>
using namespace std;
int main(){
    int n, rem, sum = 0;
    cout << "Enter a number: ";
    cin >> n; // Correctly read the input into n
    while(n != 0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    cout <<"result: "<< sum; // Display the reversed number
    return 0;
}


