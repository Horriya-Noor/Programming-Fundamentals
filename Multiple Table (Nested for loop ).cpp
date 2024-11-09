#include <iostream>
using namespace std;
int main()
{
int mul=1;
for (int i=0;i<=5;i++)
{
for (int j=1;j<=10;j++)
{
mul= i*j;
cout<<i<<"x"<<j<<"="<<mul<<endl;
}
cout<<"\n";
}
return 0;
}
