#include<iostream>
using namespace std;
void reverseString(char str[]) {
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }[[lpoyj]9]]
    for (int i = 0; i < n / 2; ++i) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverseString(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}

