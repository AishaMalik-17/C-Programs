#include<iostream>
using namespace std;
int Greatest_Number(int no[20]){
	
	cout<<"Enter any 20 integers: "<<endl;
	for(int i=0;i<20;i++){
		cin>>no[i];
    }
    int great_num=no[0];
	for(int i=0;i<20;i++){
		if(no[i]>great_num){
			great_num = no[i];
		}
	}
	cout<<"The greatest number among the above number is: "<<great_num<<endl;
	return 0;
}

int main(){
	int arr[20];
	Greatest_Number(arr);
	return 0;
}
