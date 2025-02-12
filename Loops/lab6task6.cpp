#include<iostream>
using namespace std;
int main(){
	int balance,withdraw;
	cout<<"Enter the initial balance of your bank account $: ";
	cin>>balance;
	
	if(balance<0){
		cout<<"Enter the correct balance."<<endl;
		return 1;
	}
	else if(balance==0){
		cout<<"!!!EXIT!!!"<<endl;
		return 1;
	}
	
	else{
		
	    while(balance>0){
	    	
		    cout<<"Enter the amount you want to withdraw: "<<endl;
		    cin>>withdraw;
		    if(withdraw>0 && withdraw<=balance){
			    balance=balance-withdraw;
			    cout<<"Withdraw amount :$"<<withdraw<<".\nAmount left :$"<<balance<<endl;
			
		    }
		    else if(withdraw==0){
			    cout<<"!!!EXIT!!"<<endl;
			    break;
		}
		    else{
			    cout<<"Enter correct amount."<<endl;
			    
		}
	    }
		    
		
	}
    cout<<"Amount left is :$"<<balance<<endl;
	return 0;
}


