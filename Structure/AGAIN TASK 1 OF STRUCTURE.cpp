#include<iostream>
using namespace std;
struct Product{
	int code;
	string descript;
	char packaging;
	float Price;
	float discount;
};
int main(){
	float Net_Price;
	Product items[10]= {
		{1010,"It is our First product.",'L',1000.00,0.02},
		{2020,"It is our Second product.",'S',200.00,0.02},
		{3030,"It is our Third product.",'L',2000.00,0.02},
		{4040,"It is our Forth product.",'M',500.00,0.02},
		{5050,"It is our Fifth product.",'M',800.00,0.02},
		{6060,"It is our Sixth product.",'S',450.00,0.02},
		{7070,"It is our Seventh product.",'L',1500.00,0.02},
		{8080,"It is our Eighth product.",'L',800.00,0.02},
		{9090,"It is our Ninth product.",'S',600.00,0.02},
		{1010,"It is our Tenth product.",'M',1000.00,0.02},
	};
	cout<<"Code\tDescription\t\t\tPackaging\tPrice\t\tDiscount\tFinal Price"<<endl;
	
	for(int i=0;i<10;i++){
		Net_Price=items[i].Price-(items[i].Price*items[i].discount);
	
	if(items[i].packaging=='L' && Net_Price>=200 && Net_Price<=1000){
		if(Net_Price>=200 && Net_Price<=1000){
			cout<<items[i].code<<"\t";
			cout<<items[i].descript<<"\t";
			cout<<items[i].packaging<<"\t\t";
			cout<<items[i].Price<<"\t\t";
			cout<<items[i].discount<<"\t\t";
			cout<<Net_Price;
		}
		cout<<endl;
	}
}
	return 0;
}
