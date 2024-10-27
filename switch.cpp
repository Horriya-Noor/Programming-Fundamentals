# include <iostream>
 using namespace std;
 int main (){
 	int n;
 	cout<<"Write any integer from 1- 12 to get the name of the month at that number: ";
	cin>>n;
 	switch (n>0)
 	{
	case 1:
 		cout<<"1 = Jaunary";
 	break;
 	case 2:
 		cout<<"2 = February";
 	break;
 	case 3:
 		cout<<"3 = March";
 	break;
 	case 4:
 		cout<<"4 = April";
 	break;
 	case 5:
 		cout<<"5 = May";
 	break;
 	case 6:
 		cout<<"6 = June";
 	break;
 	case 7:
 		cout<<"7 = July";
 	break;
 	case 8:
 		cout<<"8 = August";
 	break;
 	case 9:
 		cout<<"9 = September";
 	break;
 	case 10:
 		cout<<"10 = Octumber";
 	break;
 	

case 11:
 		cout<<"11 = November";
 	break;
 	case 12:
 		cout<<"12 = December";
 	break;
 	default:
 		cout<<"don,t exist";
 }
 	return 0;
 		
 }







