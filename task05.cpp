#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void name ();


main()
{

system("cls");


name();


}


void name ()
{
gotoxy(25,10);
cout << "  ###         ##     ###        ##         ###     ###   ";
gotoxy(25,11);
cout << "  # ##      ##  ##   #  #     ##  ##     #        #      ";
gotoxy(25,12);
cout << "  #   #     ##  ##   #   #    ##  ##      #        #     ";
gotoxy(25,13);
cout << "  #  #      ##  ##   #   #    ##  ##       #        #    ";
gotoxy(25,14);
cout << "  ###       ##  ##   ####     ######        #        #   ";
gotoxy(25,15);
cout << "  # #       ##  ##   #   #    ##  ##         #        #  ";
gotoxy(25,16);
cout << "  #  #      ##  ##   #   #    ##  ##          #        # ";
gotoxy(25,17);
cout << "  #   #       ##     ###      ##  ##       ###     ###   ";


}



void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 

