
#include "Bankacc.h"

Bankacc::Bankacc(){
	amt=1000;
}
Bankacc::Bankacc(float amt){
	this->amt=amt;
}
void Bankacc::deposit(float a){
	amt+=a;
	cout<<"Total amount : "<<amt<<endl;
}
void Bankacc::withdraw(float a){
	amt-=a;
	cout<<"Total amount : "<<amt<<endl;
	}

