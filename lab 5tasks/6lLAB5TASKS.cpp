#include<iostream>
using namespace std;
int main(){
	int a,b,sq,sum=0;
	cout<<"Enter any natural number: "<<endl;
	cin>>b;
	
	for(a=1;a<=b;a++){
		sq=a*a;
		sum=sum+sq;
	}
	cout<<"Sum is "<<sum<<endl;
	return 0;
}
