#include<iostream>
using namespace std;
int main()
{
	int Ram, Sham,Om;
	cout<<"Enter the age of Ram"<<endl;
	cin>>Ram;
	cout<<"Enter the age of Sham"<<endl;
	cin>>Sham;
	cout<<"Enter the age of Om"<<endl;
	cin>>Om;
	if(Ram<Sham){
		if(Ram<Om){
			cout<<"Ram is youngest"<<endl;
		}
		else{
			cout<<"Om is youngest"<<endl;
	    }
	}
	else if(Sham<Ram){
		if(Sham<Om){
			cout<<"Sham is youngest"<<endl;
			
		}
		else{
			cout<<"Om is Smallest"<<endl;
		}
	}
}
	

