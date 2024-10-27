#include<iostream>
using namespace std;
int main(){
	int a ,sum=0,num=1;
	cout<<"Enter a number: "<<endl;
	cin>>a;
while(num<=a)
	{sum+=num;
	num+=2;}
	cout<<"sum of all odd numbers between 1 and "<<a<<"is "<<sum<<endl;
return 0;
}
