#include<iostream>
using namespace std;
int main(){
	int a,b,*ptr1, *ptr2,temp;
	cout<<"Enter any two value: "<<endl;
	cin>>a>>b;
	ptr1 = &a;
	ptr2 = &b;
	cout<<"\n** Before Swapping **: "<<endl<<"The first valve is: "<<*ptr1<<" and the second value is: "<<*ptr2;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	cout<<"\n\n** After Swapping **: "<<endl<<"The first valve is: "<<*ptr1<<" and the second value is: "<<*ptr2;
	return 0;
}
