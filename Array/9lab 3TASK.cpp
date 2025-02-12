#include<iostream>
using namespace std;
int main(){
	int maxiuser=10,i,cost,totalcost=0,tickPrice=100,popcornPrice=50,z;
	cout<<"Enter number of students who want to attend Qawali Night(Maximum 10): "<<endl;
	cin>>z;
	string stud[z];
	if(z>maxiuser){
		cout<<"Error: Not more users allowed."<<endl;
		return 1;
	} 
	else{
	for(i=0;i<z;i++){
		cout<<"Enter name of student: "<<i+1<<" : "<<endl;
		cin>>stud[i];		
	}
	for(i=0;i<z;i++){
		cost=tickPrice+popcornPrice;
	    cout<<"User "<<i+1<<" : "<<"[ "<<stud[i]<<" ] Ticket and popcorn price R:"<<cost<<endl;		
        totalcost+=cost;
	}
	cout<<"The total cost is R: "<<totalcost<<endl;
   }
	return 0;
}
