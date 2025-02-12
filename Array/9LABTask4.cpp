#include<iostream>
using namespace std;
int main(){
	int entryFee=50,snackCost=150,num,maxnum=15,totalcost=0,price,a;
	cout<<"*****\nEnter number of students who want to attend Game Night Event(Maximum 15): "<<endl;
	cin>>num;
	cout<<"*****\n";
	string students[num];
	price=entryFee+snackCost;
	if(num>maxnum){
		cout<<"Error: Not more users allowed."<<endl;
		return 1;
	}
	for(a=0;a<num;a++){
		cout<<"Enter name of interested student "<<a+1<<" : "<<endl;
		cin>>students[a];
	}
	for(a=0;a<num;a++){
		cout<<"Student "<<a+1<<" : ["<<students[a]<<" ] Entry ticket and sanck price is R: "<<price<<endl<<endl;
	    totalcost+=price;
	}
	cout<<"*****The total cost is R: "<<totalcost<<"*****"<<endl;
	return 0;
}
