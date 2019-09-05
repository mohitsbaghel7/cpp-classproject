#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
 private:
	 int size;
	 T *p;
 public:
	 MyArray(void)
	 {
		 cout<<"parameterless contsructor"<<endl;
	   this->size=0;
	   this->p=new T[this->size];
	 }
	 MyArray(int size)
	 {
	  this->size=size;
	  this->p=new T[this->size];
	 
	 }
	 void accept()
	 {
	  for(int index=0;index<this->size;index++)
	  { cout<<"enter elements for p["<<index<<"]=";
	          cin>>p[index];
	  }
	 
	 }
	 void display()
		  {
          for(int index=0;index<this->size;index++)
	  { cout<<"Elements entered  for p["<<index<<"]=";
                  cout<<p[index]<<endl;
	  }

         }
	
};
int main()
{
/*
 MyArray <int> a1;
 MyArray<int> a2(5);
 a2.accept();
 a2.display();
 

  MyArray <float> a3;
 MyArray<float> a4(5);
 a4.accept();
 a4.display();

 MyArray <char> a5;
 MyArray<char> a6(5);
 a6.accept();
 a6.display();*/

  MyArray <string> a7;
 MyArray<string> a8(5);
 a8.accept();
 a8.display();

}
