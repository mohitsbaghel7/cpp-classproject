#include "Sav_acc.h"

void Sav_acc::cal_int(){
	amt=amt*irate;
	displaybal();
}
void Sav_acc::displaybal(){
	cout<<"The total balance is : "<<amt<<endl;
	}
float Sav_acc::irate=0.04;
