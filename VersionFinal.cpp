#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
struct tiempoH {
		int h=0;	
	}Relojh, *sigh;

struct tiempoM {
		int m=0;	
	}Relojm, *sigm;
	
struct tiempoS {
		int s=0;	
	}Relojs, *sigs;

int main() {
	sigh = &Relojh;
		sigm = &Relojm;
			sigs = &Relojs;
	
	int H = sigh->h;
	int M = sigm->m;
	int S = sigs->s;
	
	
	for(H=0; H<24; H++){
		for(M=0; M<60; M++){
			for(S=0; S<60; S++){
				system("cls");
					for(int y=8;y<=13;y++){gotoxy(50,y);cout<<"|";}
					gotoxy(50,8);cout<<"^";
					gotoxy(46,13);cout<<"----------";
					gotoxy(46,14);cout<<"|";
					gotoxy(55,14);cout<<"|";
					gotoxy(57,14);cout<<"----------->";
				 	gotoxy(50,6);cout<<"12";
				 	gotoxy(50,22);cout<<"06";
				 	gotoxy(30,14);cout<<"09";	
				 	gotoxy(70,14);cout<<"03";
				 	gotoxy(46,15);cout<<"----------";
				gotoxy(49,14);cout<<H<<":"<<M<<":"<<S<<endl;
				Sleep(1000);		
			}
		}
	}
	
	return 0;
}
