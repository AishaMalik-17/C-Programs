#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter any 3 numbers and see which is the greatest number: "<<endl;
	cin>>a>>b>>c;

// NESTED IF
	
	if(a>b){
		cout<<a<<" is greater than "<<b<<endl;
		
		if(b<c){
			cout<<c<<" is greater than "<<b<<endl;
		
		if(a>c){
			cout<<a<<" is greater than "<<c<<endl;
		}
		else{
			cout<<c<<" is the greatest number."<<endl;
		}	
		}
		else{
			cout<<a<<" is the greater than "<<b<<".\nIt is the greatest number"<<endl;
		}
	    }
	    else{
	    	cout<<b<<" is the greatest number."<<endl;
		}
	    
	return 0;
}
