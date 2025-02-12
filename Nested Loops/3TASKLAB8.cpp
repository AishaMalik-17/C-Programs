#include<iostream>
using namespace std;
int main (){
/*
	int x,y,rows=9;
	for(x=1;x<=rows;x++){
		for(y=1;y<=rows;y++){
			
			cout<<"*";
		}
		cout<<endl;
	}
*/	

	// NESTED WHILE LOOP
/*	int x,y,rows=9;
		x=1;
	while(x<=rows){
		x++;
		y=1;
		while(y<=rows){
			cout<<"*";
			y++;
		}
		cout<<endl;
	}
*/
    //NESTED DO-WHILE LOOP
    int x,y,rows=9;
    x=1;
    do{
    	y=1;
    	do{
    		cout<<"*";
    		y++;
    		}while(y<=rows);
    		cout<<endl;
    		x++;
	}while(x<=rows);
	return 0;
}
