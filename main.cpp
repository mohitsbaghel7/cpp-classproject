
#include "Cur_acc.h"
#include "Sav_acc.h"
int main(){
	Sav_acc s;
	Cur_acc c;
//	s.deposit();
//	c.deposit();
//	c.withdraw();
//	s.withdraw();
	c.cal_int();
	s.cal_int();
	s.displaybal();
	c.displaybal();
	return 0;
}
