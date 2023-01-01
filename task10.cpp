#include <iostream>
using namespace std;

void price (string x,int y);


main()
{
system("cls");
string x;
int y;
while(1)
{
 price(x,y);


}

}




void price(string x,int y)
{
cout <<"Enter country: ";
cin>> x;
cout << " Enter price: ";
cin>>y;
	if(x=="pakistan")
	{y=y*95/100;
	cout <<"your amount is: "<<y<<endl;
	}

	if(x=="ireland")
	{y=y*90/100;

	cout <<"your amount is: "<<y<<endl;
	}

	if(x=="india")
	{y=y*80/100;

	cout <<"your amount is: "<<y<<endl;
	}

	if(x=="england")
	{y=y*70/100;

	cout <<"your amount is: "<<y<<endl;
	}

	if(x=="canada")
	{y=y*55/100;

	cout <<"your amount is: "<<y<<endl;
	}

















}