#include <iostream>
using namespace std;

void printmenu();
void exam();
void comparemarks();


main ()
{
system("cls");
printmenu ();
while(1)
{
exam();
comparemarks();




}
}


void comparemarks()
{

string name1,name2;
int ecat1,ecat2;
cout<< "Name: ";
cin>> name1;
cout<< "Ecat marks: ";
cin>>ecat1;
cout << "Name: ";
cin >> name2;
cout << "Ecat marks: ";
cin >> ecat2;
	if (ecat1>ecat2)
	{
	cout << "roll no 1: " <<name1<<endl;
	cout << "roll no 2: " << name2<< endl;
	
	}


	if (ecat2>ecat1)
	{
	cout << "roll no 1: "<<name2<< endl;
	cout << "roll no 2: " << name1<< endl;
	
	}




















}

void printmenu ()
{


cout << "   #  # ## # # #   # ### ##   ## ### # #    #  ##  #   #  #  ##  #   #   #  #     #   #   #  #  #  #   ##   ### #   # ###  #   # ### #  #  ###    "<<endl;        
cout << "   #  # ## # #  # #  ### ###  ##  #   #    ### # # # # #  #  ##  #  # #  # ##     # # #  ### ## # ### #  ## ### # # # ###  # # # ### ## #   #     "<<endl;
cout << "    ##  # ## #   #   ### # #  ##  #   #    # # ##  #   #  #  ##  #   #   #  #     #   #  # # #  # # #  ## # ### #   # ###  #   # ### #  #   #     "<<endl;
cout << "    																		   "<<endl;
cout << "    																		   "<<endl;
cout << "																		   "<<endl;    
cout << "                 ## # #  ###  ##  ### ###  #   #                                                                                                 "<<endl;
cout << "                 ##  #    #   ##   #  ###  # # #  												   "<<endl;	
cout << "                 ##  #    #   ##   #  ###  #   #  												   "<<endl;
 

        
}














void exam()


{
string name;
float matric;
float inputM;
float inputI;
float intermediate;
float obtainedM;
float obtainedI;
float aggregate;
float ecat;
float obtainedE;
float inputE;
cout << "Name: ";
cin >> name;
obtainedM=1100;
cout <<"Matric Marks: ";
cin >>inputM;
matric=(inputM*100/obtainedM)*0.3;
obtainedI=550;
cout << "intermediate Marks : ";
cin >>inputI;
intermediate= (inputI*100/obtainedI)*0.3;
obtainedE=400;
cout << "Ecat Marks : ";
cin >>inputE;
ecat=(inputE*100/obtainedE)*0.4;
aggregate=matric+intermediate+ecat;
cout << "your aggregate is : " << aggregate<<endl;
}











