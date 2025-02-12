#include<iostream>
using namespace std;
int main(){
	int no,y,fac=1;
	cout<<"Enter any positive number: "<<endl;
	cin>>no;
	for(y=1;y<=no;y++){
		fac*=y;
	}
	cout<<"Factorial of the number "<<no<<" is: "<<fac;
	return 0;
}
