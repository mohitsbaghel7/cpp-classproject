#include <iostream>
using namespace std;

template<class T>
void myswap(T &a,T &b)
{

 T temp=a;
 a=b;
 b=temp;



}




int main()
{

  int a=10,b=20;
  myswap(a,b);
  cout<<a<<endl;
  cout<<b<<endl;

  float p=10.10,q=20.20;
  myswap(p,q);
   cout<<p<<endl;
  cout<<q<<endl;
return 0;
}
