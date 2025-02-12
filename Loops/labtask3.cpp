#include<iostream>
using namespace std;
int main(){
	int sum,x;
	cout<<"Enter any number and enter negative number to stop: "<<endl;

    sum=0;
	while(x>0){
		cout<<"Enter number: ";
		cin>>x;
		
		if(x<0){
			break;
		}
		
		sum+=x;
	}
	
	cout<<"Sum of all non-negative number is: "<<sum<<endl;
	return 0;
	
	
}
