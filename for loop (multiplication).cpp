# include <iostream>
using namespace std;
int main(){
	int num ;
	cout<<"Which multiplication table of number is required:"<<endl;
	cin>>num;
	cout<<"The multiplication table of "<<num<<endl;	
	  for(int nat=1; nat<=10 ; ++nat){
	      cout<<num<<"x"<<nat<<"="<<(num*nat)<<endl;
}
return 0;}
