#include<iostream>
using namespace std;
int main(){
	int score;
	cout<<"Enter your exam score out of 100."<<endl;
	cin>>score;
	
	if(score>=90){
		cout<<"Grade A"<<endl;
	
	}else if(score>=80&&score<=89){
		if(score>=85){
			cout<<"Grade B+"<<endl;
		}else{
			cout<<"Grade B"<<endl;
		}
	}else if(score>=70&&score<=79){
		if(score>=75){
			cout<<"Grade C+"<<endl;
		}else{
			cout<<"Grade C"<<endl;		
        }
	}else if(score>=60&&score<=69){
			cout<<"Grade D"<<endl;
	
	}else{
		cout<<"Grade: F";
	}
	return 0;
}
