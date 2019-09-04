#ifndef Bankacc_h
#define Bankacc_h
#include<iostream>
using namespace std;
class Bankacc{
	protected:
		float amt;
	public:
		Bankacc();
		Bankacc(float amt);
		void deposit(float a);
		void withdraw(float a);
};
#endif
