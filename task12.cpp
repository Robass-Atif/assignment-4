#include <iostream>
using namespace std;

void rose (float x,float y,float z);


main()
{system("cls");
float x,y,z;
while (1)
{
rose (x,y,z);



}
}






void rose (float x,float y,float z)
{
cout<< "Red Roses: ";
cin>> x;
cout << "White Roses: ";
cin>> y;
cout << "Tulips: ";
cin>> z;
x=x*2.00;
y=y*4.10;
z=z*2.50;
x=x+y+z;
cout << "original price : "<< x <<endl;

	if(x>200)
	{x=x*80/100;
	cout << "price after discount: "<< x<< endl;
	}	
	
}








