#include<iostream>
#include<stdexcept>
#define size 5
using namespace std;
template<class T>
class demo1{
	private:
		int tos;
		T arr[size];
	public :
		demo1();
		bool isEmpty();
		bool isFull();
	void  push(T);
	 void pop();
	void  peep();
};
