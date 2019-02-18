#include <stdio.h>
#include <iostream>

using namespace std;

struct Hora{int h; Hora *sig;};
struct Minuto{int m; Minuto *sig;};
struct Segundo{int s; Segundo *sig;};

void insertHora(Hora *&listaH, int h);
void insertMinuto(Minuto *&listaM, int m);
void insertSegundo(Segundo *&listaS, int s);
void mostrar(Hora *&listaH);

int main(){
	int h = 0; 
	int m = 0; 
	int s = 0;
	Hora *listaH = NULL;
	Minuto *listaM = NULL;
	Segundo *listaS = NULL;
	
	for(int i = 0; i < 23; i++){
		insertHora(listaH,h);
		cout << h << endl;
		h++;
	}
	
	mostrar(listaH);
	
	for(int j = 0; j < 60; j++){
		insertMinuto(listaM,m);
		m++;
	}
	
	for(int k = 0; k < 60; k++){
		insertSegundo(listaS,s);
		s++;
	}
	
	system("pause");
	
}

void insertHora(Hora *&listaH, int h){
	Hora *nuevo_nodo = new Hora();
	nuevo_nodo->h = h;
	Hora *a1 = listaH;
	Hora *a2;
	
	while(a1 != NULL){
		a2 = a1;
		a1 = a1 ->sig;
	}
	
	if(listaH == a1){
		listaH == nuevo_nodo;
	}else{
		a2->sig = nuevo_nodo;
	}
}

void insertMinuto(Minuto *&listaM, int m){
	Minuto *nuevo_nodo = new Minuto();
	nuevo_nodo->m = m;
	Minuto *a1 = listaM;
	Minuto *a2;
	
	while(a1 != NULL){
		a2 = a1;
		a1 = a1 ->sig;
	}
	
	if(listaM == a1){
		listaM == nuevo_nodo;
	}else{
		a2->sig = nuevo_nodo;
	}
}

void insertSegundo(Segundo *&listaS, int s){
	
	Segundo *nuevo_nodo = new Segundo();
	nuevo_nodo->s = s;
	Segundo *a1 = listaS;
	Segundo *a2;
	
	while(a1 != NULL){
		a2 = a1;
		a1 = a1 ->sig;
	}
	
	if(listaS == a1){
		listaS == nuevo_nodo;
	}else{
		a2->sig = nuevo_nodo;
	}
}

void mostrar(Hora *&listaH){
	Hora *actual = new Hora();
	actual = listaH;
	while(actual != NULL){
		cout << "El valor de h es" << actual -> h << endl;
		actual = actual -> sig;
	}
}
