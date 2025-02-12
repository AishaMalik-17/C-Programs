1#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter any number:";
	cin>>num;
	if(num>0){
	    if(num>100){
			cout<<"The number is larger.";
		}else{
			cout<<"The number is small.";
		}
	}else if(num<0){
		if(num<-100){
			cout<<"The number is very small.";
		}else{
			cout<<"The number is small and negative.";
		}
	}else{
		cout<<"The number is zero.";
	}
	return 0;
}
