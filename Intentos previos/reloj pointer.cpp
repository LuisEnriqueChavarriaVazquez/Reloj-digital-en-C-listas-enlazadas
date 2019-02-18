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
void imprimirElementos(HORAS *&lista_h, MINUTOS *&lista_m, SEGUNDOS *&lista_s);

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
	
	while((aux1_h != NULL)){
	
	for(nuevo_nodo_h->h=0; nuevo_nodo_h->h<24; nuevo_nodo_h->h++)
		//Intercambio con auxiliares
		aux2_h = aux1_h;
		aux1_h = aux1_h -> sig;
     for(nuevo_nodo_m->m=0; nuevo_nodo_m->m<60; nuevo_nodo_m->m++)
     	//Intercambio con auxiliares
     	aux2_m = aux1_m;
		aux1_m = aux1_m -> sig;
        for(nuevo_nodo_s->s=0;nuevo_nodo_s->s<60;nuevo_nodo_s->s++){
             Sleep(1000);
             system("cls");
             cout << "Reloj digital [1CM5]" << endl;
        	 cout << "Chavarria Vazquez Luis Enrique" << endl;
        	 cout << "Campero Beleche Brandon Antonio" << endl;
            //Impresion de la hora
            cout<<"\n\n\t"<<nuevo_nodo_h->h<<":"<<nuevo_nodo_m->m<<":4"<<nuevo_nodo_s<<endl;
            //Intercambio con auxiliares
            aux2_s = aux1_s;
			aux1_s = aux1_s -> sig;
         }
         
         
	}
	
	//Validacion
	if((lista_h == aux1_h) || (lista_m == aux1_m) || (lista_s == aux1_s) ){
		lista_h = nuevo_nodo_h;
		lista_m = nuevo_nodo_m;
		lista_s = nuevo_nodo_s;
	}else{
		aux2_h->sig = nuevo_nodo_h;
		aux2_m->sig = nuevo_nodo_m;
		aux2_s->sig = nuevo_nodo_s;
	}
	
	//Guardado con ayuda de sig en cada estructura
	nuevo_nodo_h->sig = aux1_h;
	nuevo_nodo_m->sig = aux1_m;
	nuevo_nodo_s->sig = aux1_s;
}

void imprimirElementos(HORAS *&lista_h, MINUTOS *&lista_m, SEGUNDOS *&lista_s){
	
	cout << "Impreso" << endl;
	
		HORAS *actual_h = new HORAS();
	MINUTOS *actual_m = new MINUTOS();
	SEGUNDOS *actual_s = new SEGUNDOS();
	
	HORAS *aux_h = lista_h;
	actual_h = lista_h;
	
	MINUTOS *aux_m = lista_m;
	actual_m = lista_m;
	
	SEGUNDOS *aux_s = lista_s;
	actual_s = lista_s;
	
	while((actual_h != NULL)){
		cout << "\t °°°Horas: " << actual_h -> h << endl;
		cout << "\t °°°Minutos: " << actual_m -> m << endl;
		cout << "\t °°°Segundos: " << actual_s -> s << endl;
		cout <<"////////////////////////////////////////////\n";
		actual_h = actual_h -> sig;
		actual_m = actual_m -> sig;
		actual_s = actual_s -> sig;
	}
}
