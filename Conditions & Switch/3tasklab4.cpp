#include<iostream>
using namespace std;
int main(){
	char op;
	int z,y;
	cout<<"Enter any two numbers:"<<endl;
	cin>>z>>y;
	cout<<"Enter any operation from the given box (+,-,/,%,*): "<<endl;
	cin>>op;
	
	switch(op){
		case'+' :
			cout<<z+y;
			break;
		
		case'-':
			cout<<z-y;
			break;
		
		case'*':
			cout<<z*y;
			break;
		
		case'/':
		    cout<<z/y;
			break;
		
		case'%':
		    cout<<z%y;
			break; 
		
		default:
		    cout<<"Invalid Operator!!";	
	}
	return 0;
}
