#include<iostream>
using namespace std;
int main(){
	float amount,charges,total_balance,balance=0;
	char ser;
	cout<<"Choose the service option from the following."<<endl;
	cout<<"D = Deposit "<<endl;
	cout<<"W = Withdraw "<<endl;
	cout<<"T = Transfer "<<endl;
	cin>>ser;
	cout<<"Enter the amount: "<<endl;
    cin>>amount;
    
    switch(ser){
    	case'D':
    		charges=0.005 *amount;
    		balance=amount-charges;
    		total_balance=amount+charges;
    		cout<<"Amount Deposited is: "<<amount<<endl;
    		cout<<"Amount after applyng deposited charges is: "<<total_balance<<endl;
    	    break;
    	    
		case'W':
			charges=0.015*amount;
			balance=amount-charges;
			total_balance=amount+charges;
			cout<<"Amount Withdraw is: "<<amount<<endl;
			cout<<"Amount after applying withdraw charges is: "<<total_balance<<endl;
		    break;
		    
		case 'T':
		    charges=0.025*amount;
			balance=amount-charges;
			total_balance=amount+charges;
			cout<<"Amount Transfer is: "<<amount<<endl;
			cout<<"Amount after applying transfer charges is: "<<total_balance<<endl;
		    break;
		    
		default:
		   cout<<"Invalid Service!!!!"<<endl;
		
	cout<<"Total remining balance: "<<balance;	   	
	}
	return 0;
}
