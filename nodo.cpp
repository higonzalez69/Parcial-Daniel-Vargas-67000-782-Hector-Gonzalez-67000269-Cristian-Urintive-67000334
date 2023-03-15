#include <iostream>
using namespace std;

	struct Nodo{
		int dato;
		Nodo*sig;	
	};



void insertar(Nodo* &cab,int n){
	Nodo* nuevo=new Nodo;
	nuevo->dato=n;
	nuevo->sig=nuevo;
	cab=nuevo;
}

void imprimir(Nodo* cab){
	Nodo*aux=cab;
	cout<<"la lista es\n";
	do{
		cout<<aux->dato<<"\t";
		aux=aux->sig;
	}while(aux!=cab);
	
}

void insertarfinal(Nodo* cab,int n){
	Nodo*nuevo=new Nodo;
	nuevo->dato=n;
	nuevo->sig=cab;
    Nodo*aux=cab;
    while (aux->sig!=cab){
    	aux=aux->sig;
    
	}
	aux->sig=nuevo;
	nuevo->sig=cab;
}

void medio(Nodo* cab,int n){
	Nodo* aux=cab;

	while (aux->dato!=n){
		aux=aux->sig;
		
	}
	
	do{
		cout<<aux->dato<<"\t";
		aux=aux->sig;
		
	}while(aux->dato!=n);
	
	
	
}

int main(){
	int n,m;
	Nodo*cab=NULL;
		cout<<"inserte un numero";
		cin>>n;
		insertar(cab,n);
	do{
	cout<<"inserte un numero";
		cin>>n;
		insertarfinal(cab,n);

		cout<<"ingresar mas?\n";
		cin>>m;
	}while (m==1);
	
		cout<<"desde donde quiere iniciar?";
		cin>>n;
    	medio(cab,n);
    	
}
