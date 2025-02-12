#include<iostream>
using namespace std;

int compare(int a,int b,int c){
	if(a>b&&a>c){
		cout<<a<<" is the Largest."<<endl;
	}
	else if(b>c&&b>a){
		cout<<b<<" is the Largest."<<endl;
	}
	else{
		cout<<c<<" is the Largest."<<endl;
	}
	return 0;
}
int pare(int &e,int &f,int &g){
	if(e>f&&e>g){
		cout<<e<<" is the Largest."<<endl;
	}
	else if(f>g&&f>e){
		cout<<f<<" is the Largest."<<endl;
	}
	else{
		cout<<g<<" is the Largest."<<endl;
	}
	return 0;
}

// PASS BY VALUE

int main(){
	cout<<"*****PASS BY VALUE*****\n";
	int d,e,f;
	cout<<"Enter 3 numbers one by one:"<<endl;
	cin>>d>>e>>f;
	compare(d,e,f);

// PASS BY REFERENCE 

	cout<<"*****PASS BY REFERENCE*****\n";
	int x,y,z;
	cout<<"Enter 3 numbers one by one:"<<endl;
	cin>>x>>y>>z;
	pare(x,y,z);
	return 0;
}
