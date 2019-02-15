#include <stdio.h>
#include <windows.h>
#include <iostream>
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

void reloj(HORAS *&lista_h, MINUTOS *&lista_m, SEGUNDOS *&lista_s, int h, int m, int s);

int main(){
	while(1){
		int h,m,s;
		h=0; m=0; s=0;
		HORAS *lista_h = NULL;
		MINUTOS *lista_m = NULL;
		SEGUNDOS *lista_s = NULL;
		reloj(lista_h,lista_m,lista_s,h,m,s);
	}
	return 0;
}

void reloj(HORAS *&lista_h, MINUTOS *&lista_m, SEGUNDOS *&lista_s, int h, int m, int s){
	HORAS *nuevo_nodo_h = new HORAS();
	MINUTOS *nuevo_nodo_m = new MINUTOS();
	SEGUNDOS *nuevo_nodo_s = new SEGUNDOS();
	nuevo_nodo_h->h = h;
	nuevo_nodo_m->m = m;
	nuevo_nodo_s->s = s;
	
	
	/*DECLARACION DE AUXILIARES PARA HORAS*/ HORAS *aux1_h = lista_h; HORAS *aux2_h;
	/*DECLARACION DE AUXILIARES PARA MINUTOS*/ MINUTOS *aux1_m = lista_m; MINUTOS *aux2_m;
	/*DECLARACION DE AUXILIARES PARA SEGUNDOS*/ SEGUNDOS *aux1_s = lista_s; SEGUNDOS *aux2_s;
	
	while((aux1_h != NULL)&&(aux1_m != NULL)&&(aux1_s != NULL)){
	
	for(nuevo_nodo_h->h=0; nuevo_nodo_h->h<24; nuevo_nodo_h->h++)
	aux2_h = aux1_h;
		aux1_h = aux1_h -> sig;
     for(nuevo_nodo_m->m=0; nuevo_nodo_m->m<60; nuevo_nodo_m->m++)
     aux2_m = aux1_m;
		aux1_m = aux1_m -> sig;
         for(nuevo_nodo_s->s=0;nuevo_nodo_s->s<60;nuevo_nodo_s->s++)
         {
             Sleep(1000);
             system("cls");
             cout << "Reloj digital [1CM5]" << endl;
        	 cout << "Chavarria Vazquez Luis Enrique" << endl;
        	 cout << "Campero Beleche Brandon Antonio" << endl;
             cout<<"\n\n\t"
                 <<nuevo_nodo_h->h<<":"<<nuevo_nodo_m->m<<":"<<nuevo_nodo_s<<endl;
            aux2_s = aux1_s;
			aux1_s = aux1_s -> sig;
         }
	}
}

/*	if(lista == aux1){
		lista = nuevo_nodo;
	}else{
		aux2->sig = nuevo_nodo;
	}*/
	
//	nuevo_nodo->sig = aux1;
