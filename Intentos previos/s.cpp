#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

struct HORAS{
    int h;
    HORAS *sig;
};

struct MINUTOS{
	int m;
	MINUTOS *sig;
};

struct SEGUNDOS{
	int s;
	SEGUNDOS *sig;
};


int main()
{
	HORAS a;
	MINUTOS b;
	SEGUNDOS c;
    a.h = 0;
    b.m = 0;
    c.s = 0;
    HORAS *lista_h = NULL;
    MINUTOS *lista_m = NULL;
    HORAS *lista_s = NULL;
    
    //Recorrer
    HORAS *actual_h = new HORAS();
    MINUTOS *actual_m = new MINUTOS();
    SEGUNDOS *actual_s = new SEGUNDOS();
    
    actual_h = lista_h;
    actual_m = lista_m;
    actual_s = lista_s;

	for(a.h=0; a.h<24; a.h++)
		actual_h = actual_h -> sig;
     for(b.m=0; b.m<60; b.m++)
     		actual_m = actual_m -> sig;
         for(c.s=0;c.s<60;c.s++)
         {
             Sleep(1000);
             system("cls");
             cout << "Reloj digital [1CM5]" << endl;
        	 cout << "Chavarria Vazquez Luis Enrique" << endl;
        	 cout << "Campero Beleche Brandon Antonio" << endl;
             cout<<"\n\n\t"
                 <<a.h<<":"<<b.m<<":"<<c.s<<endl;
            actual_s = actual_s -> sig;
         }
         
        system("pause");	
}
