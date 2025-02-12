#include<iostream>
using namespace std;
int main(){
	int row,col,a;
	cout<<"Enter the size of an array: "<<endl;
	cin>>a;
	int matrix[a][a];
	cout<<"Enter elements of rows and the column for an array: "<<endl;
	for(row=0;row<a;row++){
		for(col=0;col<a;col++){
			cin>>matrix[row][col];
		}
	}
	cout<<"Original matrix is: "<<endl;
	for(row=0;row<a;row++){
		for(col=0;col<a;col++){
	        cout<<matrix[row][col]<<" ";
	    }
	    cout<<endl;
    }
	cout<<"Transpose of given martix is: "<<endl;
	for(row=0;row<a;row++){
		for(col=0;col<a;col++){
	        cout<<matrix[col][row]<<" ";
	    }
	    cout<<endl;
    }
	return 0;
}
