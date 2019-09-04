
#include "Cur_acc.h"
void Cur_acc:: cal_int(){
	amt=irate*amt;
	displaybal();
}
void Cur_acc:: displaybal(){
	cout<<"The total balance : "<<amt<<endl;
}
float Cur_acc::irate=0.06;
