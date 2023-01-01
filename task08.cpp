#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x,int y);
void same (int x,int y);


main ()
{
system("cls");
int x,y;
while(1)
{
cout << "Enter first no: ";
cin>> x;
cout << "Enter second no: ";
cin >> y;
same (x,y);



}
}





void same (int x,int y)
{
	if (x==y)
	{
	
	cout<<"   True"<<endl;
	}
	if (x!=y)
	{cout << "False"<< endl;
	}

}









void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 

