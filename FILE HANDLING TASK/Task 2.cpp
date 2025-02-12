#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outFile("output.txt",ios::app);
	if(!outFile){
		cout<<"Error: Could not open file for handling"<<endl;
		return 1;
	}
	outFile<<"Line 1: Writing to a file in C++."<<endl;
	outFile<<"Line 2: File handling is essentail for data manipulation."<<endl;
	cout<<"File is created.";
	outFile.close();
	return 0;
}
