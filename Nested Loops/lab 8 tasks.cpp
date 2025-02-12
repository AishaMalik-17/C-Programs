#include<iostream>
using namespace std;
int main (){
/*	int i,j,rows=7;
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			
			cout<<"*";
		}
		cout<<endl;
	}
*/
	//NESTED WHILE LOOP
	int i,j,rows=6;
	i=0;
	while(i<=rows){
		i++;
		j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
	}
  
}
    //NESTED DO-WHILE LOOP 
 /*   int i,j,rows=7;
    i=1;
    do{
    	j=1;
    	do{
    		cout<<"*";
    		j++;
    		}while(j<=i);
    		cout<<endl;
    		i++;
	}while(i<=rows);
	return 0;
}
*/
