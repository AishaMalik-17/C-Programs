#include<iostream>
using namespace std;
int main (){
/*
	int num,sum=0,o,u;
	cout<<"Enter any positive number: "<<endl;
	cin>>num;
	for(o=1;o<=num;o++){
		for(u=1;u<=o;u++){
			if(o==u){
				sum+=u;
			}
		}
	}
	cout<<"Sum of number from the given number "<<num<<" is: "<<sum;
*/
    //NESTED WHILE LOOP  
/*    int num,sum=0,o,u;
	cout<<"Enter any positive number: "<<endl;
	cin>>num;
	
		o=1;
	while(o<=num){
		u=1;
		while(u<=o){
			if(o==u){
				sum+=u;
			}
			u++;
		}
		o++;
	}
	cout<<"Sum of number from the given number "<<num<<" is: "<<sum;
*/	
    //NESTED DO-WHILE LOOP
    int num,sum=0,o,u;
	cout<<"Enter any positive number: "<<endl;
	cin>>num;
	o=1;
    do{
    	u=1;
    	do{
    		if(u==o){
    			sum+=u;
			}
			u++;
		}
		while(u<=o);
		o++;
	}
	while(o<=num);
	cout<<"Sum of number to the given number "<<num<<" is: "<<sum;
	return 0;
}
