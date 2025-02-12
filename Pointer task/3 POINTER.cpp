#include <iostream>
using namespace std;
int square(int num) {
    return num * num;
}

int main() {
    int a,(*S)(int);
    S = &square;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "Square of the entered number is: " << (*S)(a);
    return 0;
}

