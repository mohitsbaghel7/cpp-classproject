

#include "Bankacc.h"
class Sav_acc:public Bankacc
{
	protected:
		float amt;
		float tot_bal;
	public:
	
		static float irate;
		void cal_int();
		void displaybal();
};

