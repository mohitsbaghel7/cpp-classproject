#include<iostream>
using namespace std;
template <class T>
class joiner
{
 public:
	 T combine(T x,T y)
	 {
	  return x+y;
	 
	 }


};
int main()
{
 joiner<int> ij;
 joiner<float> cj;
cout<<ij.combine(10,20)<<endl;
 cout<<cj.combine(10.10,20.20);
 return 0;




}
