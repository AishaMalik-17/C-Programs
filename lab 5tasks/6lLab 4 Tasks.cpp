#include<iostream>
using namespace std;
int main(){
	int service;
	do{
		cout<<"Choose any service from the following list: ";
		cout<<"\n****Menu****\n";
		cout<<"1 is for Hello.\n";
		cout<<"2 is for Hello User.\n";
		cout<<"3 is for Exit.\n";
		cin>>service;
		
		switch(service){
			case 1:
				cout<<"Hello."<<endl;
				break;
			case 2:
			    cout<<"Hello User."<<endl;
				break;
			case 3:
			    cout<<"Exit"<<endl;
				break;
			default:
			    cout<<"Enter correct service. Try again."<<endl;			
		}
		if(service==3){
			break;
		}
		
	}
		while(service!=3);
		return 0;
}

