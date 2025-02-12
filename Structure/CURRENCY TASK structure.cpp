#include<iostream>
using namespace std;
struct Currency{
		string TypeofCurrency;
		float amount;
	};
int main(){
	Currency indollar;
	cout<<"Choose Currency: ";
	cout<<"Enter amount in Dollar: ";
	cin>>indollar.amount;
	
	float exchange;
	float dollar_rate=277.53;
	exchange=indollar.amount*dollar_rate;
	
	cout<<indollar.amount<<" $ is equal to "<<exchange<<" Rupee";
	return 0;
}
