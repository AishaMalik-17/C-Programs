#include<iostream>
using namespace std;
int main(){
/*	int a,b;
	for(a=1;a<=10;a++){
		for(b=1;b<=5;b++){
			cout<<a<<" * "<<b<<" = "<<a*b;
	        cout<<"\t";
		}
		cout<<endl;
	}
*/
	
	//NESTED WHILE LOOP
	
/*	int a,b;
	a=1;
	while(a<=9){
		a++;
		b=1;
		while(b<=5){
			cout<<a<<" * "<<b<<" = "<<a*b;
			b++;
			cout<<"\t";
		}
		cout<<endl;
	}
	*/
	
	// NESTED DO-WHILE LOOP
	int a,b;
    a=1;
    do{
    	b=1;
    	do{
    		cout<<a<<" * "<<b<<" = "<<a*b;
    		cout<<"\t";
    		b++;
    		}while(b<=5);
    		cout<<endl;
    		a++;
	}while(a<=10);
	return 0;
}
