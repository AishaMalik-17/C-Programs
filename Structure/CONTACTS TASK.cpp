#include<iostream>
using namespace std;
struct Contacts{
	string Name;
	string Address;
	int ph_no;
};
int main(){
	Contacts details[10]={
		{"Ayesha","6th Road,Rawalpinid",29102918380},
		{"Manahil","6th Road,Rawalpindi",7283938788},
		{"Sara","Punjab Society,Rawalpindi",79237023},
		{"Sarmad","Saadar,Rawalpindi",88010889},
		{"Aisha","Gullberg,Isalamabad",882137013},
		{"Saad","Township,Lahore",820392155},
		{"Esha","Allam Iqbal Town,Lahore"},
		{"Noor","Chandi Chowk,Rawalpindi",71937525},
		{"Arooba","Committe Chowk,Rawalpindi",72913819},
		{"Sahr","Model Town,Lahore",71298103},
	};
    char cont;
    cout<<"Enter the first letter 1 or first 2 letter of the name: ";
    cin>>cont;
	if(cont=='S'|| cont=='s'){
		cout<<details[2]<<endl<<details[3]<<endl<<details[5]<<endl<<details[9]<<endl;
	}
	if else(cont=='SAR'|| cont=='sar'|| cont=='Sar'){
		cout<<details[2]<<endl<<details[3];
	}
	else{
		cout<<"Contact not found",
	}
	
	return 0;
}
