#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outFile("filename.txt",ios::app);
	if(!outFile){
		cout<<"Error: Could not open file for handling"<<endl;
		return 1;
	}
	outFile<<"Line 1: Hello, World!"<<endl;
	outFile<<"Line 2: File andling in C++."<<endl;
	cout<<"File is created.";
	outFile.close();
	return 0;
}
