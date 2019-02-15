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

