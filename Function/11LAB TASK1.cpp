#include<iostream>
using namespace std;

int swapping(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	return 0;
}
int swap(int c,int d){
	int empty;
	empty=c;
	c=d;
	d=empty;
	return 0;
}

// PASS BY REFERENCE 

int main(){
	cout<<"*****PASS BY REFERENCE*****"<<endl;
	int a=10;
	int b=15;
    cout<<"Before Swapping.\nFirst Number = "<<a<<" and Second Number = "<<b<<endl;
    swapping(a,b);
    cout<<"After Swapping.\nFirst Number = "<<a<<" and Second Number = "<<b<<endl;

// PASS BY VALUE

	cout<<"*****PASS BY VALUE*****"<<endl;
	int c=20;
	int d=40;
    cout<<"Before Swapping.\nFirst Number = "<<c<<" and Second Number = "<<d<<endl;
    swap(c,d);
    cout<<"After Swapping.\nFirst Number = "<<c<<" and Second Number = "<<d<<endl;
	return 0;
}
