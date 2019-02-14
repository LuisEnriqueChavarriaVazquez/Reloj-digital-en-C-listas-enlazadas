#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

struct time{
    int h,m,s;
};


int main()
{
	time a;
    a.h = 0;
    a.m = 0;
    a.s = 0;

	for(a.h=0; a.h<24; a.h++)
     for(a.m=0; a.m<60; a.m++)
         for(a.s=0;a.s<60;a.s++)
         {
             Sleep(1000);
             system("cls");
             cout << "Reloj digital [1CM5]" << endl;
        	 cout << "Chavarria Vazquez Luis Enrique" << endl;
        	 cout << "Campero Beleche Brandon Antonio" << endl;
             cout<<"\n\n\t"
                 <<a.h<<":"<<a.m<<":"<<a.s<<endl;
         }
         
        system("pause");	
}
