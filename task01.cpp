#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);

main()
{

system("cls");
cout << "test";

gotoxy(5,7);
cout << "test is given";



}


void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 

