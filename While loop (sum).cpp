# include <iostream>
using namespace std;
int main (){
	int num, sum;
	cout<<"Enter numbers (put negative number to stop): "<<endl;
while (true){
	 cin>>num;
	if(num<=0){
	   break;}
	sum+=num;}
	cout<<"\n Then number is "<<sum<<endl;
return 0;}