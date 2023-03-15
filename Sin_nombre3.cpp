#include<iostream>
using namespace std;

struct lista{
int dato;
lista*sig;
};

void crear(lista*&cab,int n){
lista*nuevo=new lista;  
nuevo->sig=NULL;      
nuevo->dato=n;
cab=nuevo;

}

void ins(lista *&cab, int n){
lista *nuevo_nodo = new lista;
nuevo_nodo->dato = n;
nuevo_nodo->sig = cab;
cab = nuevo_nodo;
}


void mostrar(lista *&cab){
lista * actual;
actual = cab;
while(actual != NULL){
cout<<actual->dato<<" ->";
actual = actual->sig;
}

}


int main (){
int n;
bool listcontinue = true;
lista * cab = NULL;
while(listcontinue){
cout<<"ingrese un numero"<<endl;
cin>>n;
ins(cab,n);
cout<<"quiere seguir agrgando numeros? si = 1, no = 0"<<endl;
cin>>listcontinue;
}
cout<<"lista: "<<endl;
mostrar(cab);

return 0;
}