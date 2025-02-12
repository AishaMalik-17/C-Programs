#include<iostream>
using namespace std;
int main(){
	string password = "Ayesha123";
	int attempt=1;
	string user_pass;
	
	do{
		cout<<"Enter your password: ";
		cin>>user_pass;
		attempt++;
		
		if(user_pass==password){
			cout<<"Correct Password."<<endl;
			break;
		}
		else{
			cout<<"!!Incorrect Password!! Please Try Again."<<endl;
		}
	}
	while(attempt<=3);
	return 0;
}
