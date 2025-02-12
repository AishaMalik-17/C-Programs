#include<iostream>
using namespace std;
int main (){
/*
	int num,fact=1,s,h;
	cout<<"Enter any positive number: "<<endl;
	cin>>num;
	for(s=1;s<=num;s++){
		for(h=1;h<=s;h++){
			if(s==h){
				fact*=h;
			}
		}
	}
	cout<<"Factorial of given number is: "<<fact;
*/	
   	// NESTED WHILE LOOP
/*
	int num,fact=1,s,h;
	cout<<"Enter any positive number: "<<endl;
	cin>>num;
	
		s=1;
	while(s<=num){
		h=1;
		while(h<=s){
			if(s==h){
				fact*=h;
			}
			h++;
		}
		s++;
	}
	cout<<"Factorial of given number is: "<<fact;
*/

    //Nested Do-While Loop
    int num,fact=1,s,h;
	cout<<"Enter any positive number: "<<endl;
	cin>>num;
	s=1;
    do{
    	h=1;
    	do{
    		if(h==s){
    			fact*=h;
			}
			h++;
		}
		while(h<=s);
		s++;
	}
	while(s<=num);
	cout<<"Factorial of given number is: "<<fact;
	return 0;
	
}
