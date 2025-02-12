#include<iostream>
using namespace std;
int main(){
	int num=42,x;
	cout<<"I have selected number from between 1 to 100. Try to guess it."<<endl;
	
	do{
		cout<<"Try to guess number: "<<endl;
		cin>>x;
		
		if(x>num){
			cout<<"The guess number is larger than the secret number. Please try again."<<endl;
		}
		else if(x<num){
			cout<<"The guess number is smaller than the secret number. Please try again."<<endl;
		}
		else{
			cout<<"!! You won !! You guessed it correctly.";
		}
	}
	while(x!=num);
	return 0;
}
