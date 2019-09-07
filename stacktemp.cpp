#include "demo1.h"
template<class T>
demo1<T>::demo1(){
	tos=-1;
}
template<class T>
bool demo1<T>:: isEmpty(){
	return (tos==-1);
}
template<class T>
bool demo1<T>:: isFull(){
	return (tos==(size-1));
}
template<class T>
void demo1<T>::push(T a){
	if(isFull()){
		throw runtime_error("stack is full\n");
	}
	else
	{
		arr[tos++];
		arr[tos]=a;
	}
	
}
template<class T>
void demo1<T>:: pop(){
	if(isEmpty()){
		throw runtime_error("Stack underflow\n");
	}
	else
	{
	cout<<"removed = "<<arr[tos]<<endl;
	tos-=1;
	}
}

template<class T>
void demo1<T>:: peep()
{
	if(isEmpty()){
		throw runtime_error("Stack is underflow");
	}
	cout<<"top of stack is ="<<arr[tos]<<endl;
}


