#include<iostream>
using namespace std;
int main(){
	int var = 10;
    int* ptr;
    ptr = &var;
    cout << "Value of variable: " << var << std::endl;
    cout << "Value at address stored in pointer: " << *ptr << std::endl;
    return 0;

}
