#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

struct tiempo{ 
	int h,m,s;
    tiempo *sig;
};

void insertarHoras(tiempo *&lista_t, int h,int m, int s);

int main(){
	
	int h,m,s;
	int retorno_t;
	h=0; m=0; s=0;
	tiempo *lista_t = NULL;
	
		for(int i = 0; i <= 10; i++){
			insertarHoras(lista_t, h,m,s);
			m++;
			s++;
			h++;
		}

}

void insertarHoras(tiempo *&lista_t, int h, int m, int s){
	tiempo *nuevo_nodo_t = new tiempo();
	nuevo_nodo_t->h = h;
	nuevo_nodo_t->m = m;
	nuevo_nodo_t->s = s;
	tiempo *aux1 = lista_t; 
	tiempo *aux2;
	
	while((aux1 != NULL)){
		aux2 = aux1;
		aux1 = aux1 -> sig;
		cout << nuevo_nodo_t -> h;
	}
	
	cout << endl;
	
	if(lista_t == aux1){
		lista_t = nuevo_nodo_t;
	}else{
		aux2->sig = nuevo_nodo_t;
	}
	
	nuevo_nodo_t->sig = aux1;
}

