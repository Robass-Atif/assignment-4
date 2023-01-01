#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x,int y);
void s();
void i();
void a();
void w();
void A();

main()
{
system ("cls");
s();
i();
a();
w();
A();
}


void s()
{
gotoxy(10,2);
cout << "                   #     ";
gotoxy(10,3);
cout << "       #        #    #   ";
gotoxy(10,4);
cout << "       #      #      #   ";
gotoxy(10,5);
cout << "       #   #         #   ";
gotoxy(10,6);
cout << "        #                "; 

}


void i()
{
gotoxy(10,8);
cout << "     #                #  ";
gotoxy(10,9);
cout << "     ##################  ";
gotoxy(10,10);
cout << "     #                #  ";
}

void a()
{

gotoxy(10,13);
cout << "   ###################  ";
gotoxy(10,14);
cout << "  #        #            ";
gotoxy(10,15);
cout << "  #        #            ";
gotoxy(10,16);
cout << "   ###################  ";
}


void w()
{
gotoxy(10,18);
cout << "  #####################  ";
gotoxy(10,19);
cout << "                    #    ";
gotoxy(10,20);
cout << "                  #      ";
gotoxy(10,21);
cout << "               #         ";
gotoxy(10,22);
cout << "                  #      ";
gotoxy(10,23);
cout << "                    #    ";
gotoxy(10,24);
cout << "  #####################  ";

}

void A()
{
gotoxy(10,26);
cout << "  #####################  ";
gotoxy(10,27);
cout << " #        #              ";
gotoxy(10,28);
cout << " #        #              ";
gotoxy(10,29) ;
cout << "  #####################  ";
gotoxy(10,30);


}






void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 