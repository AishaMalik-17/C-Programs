#include<iostream>
using namespace std;
int main()
{
	float length,width,perimeter,area;
	cout<<"Enter the value of length: ";
	cin>>length;
	cout<<"Enter the value of width: ";
	cin>>width;
	area=length*width;
	perimeter=2*(length+width);
	cout<<"Calculated area: "<<area<<".\nCalculated perimeter: "<<perimeter<<".";
	return 0;
}
