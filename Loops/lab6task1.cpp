#include<iostream>
using namespace std;
int main(){
	int i,num;
	cout<<"Enter number which table you want to know: ";
	cin>>num;
	
	for(i=1; i<=10; i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
		 
	}
	return 0;
}
