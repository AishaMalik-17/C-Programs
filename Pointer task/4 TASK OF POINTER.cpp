#include<iostream>
using namespace std;
int main(){
	int var = 5;
	int *pointVar;
	pointVar = &var;
	cout<<"var = "<<var;
	cout<<"\nAddress of var (&var) = "<<&var;
	cout<<"\npointVar = "<<pointVar;
	cout<<"\nContents of the address pointed to by pointVar = "<<*pointVar;
	cout<<"\n\nEnter new valur for var: ";
	cin>>*pointVar;
	cout<<"Update value of var = "<<var;
    return 0;
}
