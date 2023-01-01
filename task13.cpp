#include <iostream>
using namespace std;

void holiday(int x,int y);

main()
{
system("cls");
int x,y;
while(1)
{
holiday(x,y);





}
}










void holiday(int x,int y)
{

cout<<"Holidays: ";
cin>> x;
y=365-x;

x=(x*127+y*63);
x=30000-x;
	

	if (x>0)
	{y=x%60;
	x=x/60;
	cout <<" tom sleep well " <<x << " hours and "<<y << " minutes  less for play " << endl;
	}
	

if (x<0)
	{y=(-x)%60;
	x=(-x)/60;
	cout <<" tom will run away "<< x<<" hours and "<<y<< " minutes for play " <<endl;
	}




















}