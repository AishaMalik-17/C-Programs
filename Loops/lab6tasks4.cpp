#include<iostream>
using namespace std;
int main(){
	int a,z;
	int sum=0;
	cout<<"Enter any positive number: "<<endl;
	cin>>a;
	
	z=1;
	while(z<=a){
		if(z%2 !=0){
			sum+=z;
		}
		z++;
	}
	
	cout<<"Sum of all the odds numbers from 1 to "<<a<<" is = "<<sum<<endl;
	return 0;
}
