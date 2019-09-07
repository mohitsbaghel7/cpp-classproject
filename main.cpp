#include "demo1.h"
#include<cstdlib>
int main(){
	int a;
	demo1<int> d;
	do{
		cout<<"For push press 1"<<endl;
		cout<<"For pop press 2"<<endl;
		cout<<"For peep press 3"<<endl;
		cout<<"For exit press 4"<<endl;
		cin>>a;
	
			switch(a){
				case 1:
					int b;
					cout<<"Enter a number = ";
					cin>>b;
					try{
					d.push(b);
					}
					catch(runtime_error r){
						cout<<r.what();
					}
					break;
				case 2:
					try{
					d.pop();
					}
					catch(runtime_error r){
						cout<<r.what();
					}
					break;
				case 3:try{
					d.peep();
				       }
				       catch(runtime_error  r){
				       }

					break;
				default:
					cout<<"choose wisely"<<endl;
			}
	}
		while(a!=4);



	return 0;
}


					
		
		
