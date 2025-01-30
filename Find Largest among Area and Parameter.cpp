#include<iostream>
using  namespace std;
int main()
{
	int Length, Breadth;
	cout<<"Enter the Length of Rectangle"<<endl;
	cin>>Length;
	cout<<"Enter the Breadth of Rectangle"<<endl;
	cin>>Breadth;
	int Area= Length*Breadth;
	int Parameter =2*(Length+Breadth);
	cout<<"Area of Rectangle is"<<Area<<endl;
	cout<<"Parameter of Rectangle is"<<Parameter<<endl;
	
	if(Area>Parameter){
		cout<<"Area is Greater than Parameter."<<endl;
		
	}
	else{
		cout<<"Parameter is Greatest."<<endl;
	}
	
	
}
