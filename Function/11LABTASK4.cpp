#include<iostream>
using namespace std;

int tempOpinion(int tmp){
	if(tmp>=20&&tmp<=30){
		cout<<"OK"<<endl;
	}
	else if(tmp<10){
		cout<<"COLD"<<endl;
	}
	else if(tmp>30){
		cout<<"HOT"<<endl;
	}
	else{
		cout<<"No information this present on this temperature."<<endl;
	}
	return 0;
}
int temp_Opinion(int &temp){
	if(temp>=20&&temp<=30){
		cout<<"OK"<<endl;
	}
	else if(temp<10){
		cout<<"COLD"<<endl;
	}
	else if(temp>30){
		cout<<"HOT"<<endl;
	}
	else{
		cout<<"No information this present on this temperature."<<endl;
	}
	return 0;
}

// PASS BY VALUE

int main(){
	cout<<"*****PASS BY VALUE*****"<<endl;
	int T;
	cout<<"Enter Temperature: "<<endl;
	cin>>T;
	tempOpinion(T);

// PASS BY REFERENCE

	cout<<"*****PASS BY REFERENCE*****"<<endl;
	int TP;
	cout<<"Enter Temperature: "<<endl;
	cin>>TP;
	temp_Opinion(TP);
	return 0;
}
