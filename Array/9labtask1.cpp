#include<iostream>
using namespace std;
int main(){
	int i,arr[3];
	cout<<"Enter the elements of: "<<endl;
	for(i=0;i<3;i++){
		cin>>arr[i];
	}
	cout<<"Forward Order: "<<endl;
	for(i=0;i<3;i++){
		cout<<arr[i]<<endl;
    }
    cout<<"Reversed Order: "<<endl;
    for(i=2;i>=0;i--){
		cout<<arr[i]<<endl;
    }
    return 0;
}
