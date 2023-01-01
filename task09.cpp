#include <iostream>
using namespace std;

void input (string x);

main ()
{
system ("cls");
while(1)
{
string x;
cout << "Enter true/False: ";
cin>>x ;

input (x);







}

}






void input (string x)
{
if(x=="false"){cout << "True"<<endl;}
if(x=="true"){cout << "false "<<endl;}


}