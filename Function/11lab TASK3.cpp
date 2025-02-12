#include<iostream>
using namespace std;

int cube(int n){
	return n*n*n;
}
int cal_cube(int &U){
	return U*U*U;
}

// PASS BY VALUE 

int main(){
	cout<<"*****PASS BY VALUE*****"<<endl;
	int num;
	do{
	    cout<<"Enter number whose cube you want to know(Enter 0 to stop):";
     	cin>>num;
     	cube(num);
		cout<<"Cube of entered number "<<num<<" is "<<cube(num)<<endl;	
	}
	while(num!=0);

// PASS BY REFERENCE

	cout<<"*****PASS BY REFERENCE*****"<<endl;
	int no;
	do{
	    cout<<"Enter number whose cube you want to know(Enter 0 to stop):";
     	cin>>no;
     	cal_cube(no);
		cout<<"Cube of entered number "<<no<<" is "<<cal_cube(no)<<endl;	
	}
	while(no!=0);
 return 0;
}
