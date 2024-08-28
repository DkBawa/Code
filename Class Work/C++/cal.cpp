//example
#include<iostream>
using namespace std;

class A {
	public:
		int a,b;
		show()
	    {
			cout<<"Enter Number 1 :";
			cin>>a;
				cout<<"Enter Number 2 :";
			cin>>b;
		}
		
		fun1(){
			cout<<"Addtion is : "<<a+b<<endl;
		}
		fun2(){
				cout<<"Subtract is : "<<a-b<<endl;
		}
		fun3(){
				cout<<"MUltiplication is : "<<a*b<<endl;
		}
		
		};
main () {
	A obj;  // object creation
	obj.show();
	obj.fun1();
	obj.fun2();
	obj.fun3();
	
}
