#include<iostream>
using namespace std;
int main(){
	float temp,avg_temp=0,sum_temp=0;
	int day;

	for(day=1;day<=7;day++){
		cout<<"Enter temperature for day: "<<day<<endl;
		cin>>temp;
		
		sum_temp+=temp;
		avg_temp=sum_temp/7;
		
	}
	cout<<"Average temperature of this week is: "<<avg_temp<<endl;
	return 0;
}
