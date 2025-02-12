#include<iostream>
using namespace std;

int main(){
    int Store_budget[3][12]; 
    string Months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    
    for(int i=0;i<12;i++){
    	cout<<"Enter Expensive Of Month "<<Months[i]<<" : ";
    	cout<<"Rent: ";
    	cin>>Store_budget[0][i];
    	cout<<"Electricity Bill: ";
    	cin>>Store_budget[1][i];
    	cout<<"Gas Bill: ";
    	cin>>Store_budget[2][i];
        
	}
	cout<<"*|*|*| Yearly Budget *|*|*|"<<endl;
	cout<<"Month \t\t Rent \t\t Electricity \t\t Gas"<<endl;
	for(int i=0;i<12;i++){
		cout<<Months[i]<<" \t";
		cout<<Store_budget[0][i]<<" \t\t";
		cout<<Store_budget[1][i]<<" \t\t";
		cout<<Store_budget[2][i];
		cout<<endl;
	}
	return 0;
}
	
	
