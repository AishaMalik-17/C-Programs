#include<iostream>
using namespace std;
int main()
{
	int subj1,subj2,subj3,Marks;
	cout<<"Enter marks of first subject: ";
	cin>>subj1;
	cout<<"Enter marks of second subject: ";
	cin>>subj2;
	cout<<"Enter marks of third subject: ";
	cin>>subj3;
	Marks=(subj1+subj2+subj3)/3;
	if(Marks>=90){
		cout<<"Grade:A";
	}
	else if(Marks>=80){
		cout<<"Grade:B";
	}
	else if(Marks>=70){
		cout<<"Grade:C";
	}
	else if(Marks>=60){
		cout<<"Grade:D";
	}
	else{
		cout<<"Grade:F";
	}
	return 0;
}
