#include<iostream>
using namespace std;

class Base
{
 public :
 int A,B;
 void fun()
 {
  cout<<"Base fun\n"; //100	 
 } 
 virtual void gun()
 {
  cout<<"Base gun\n"; // 2000
 }
 virtual void sun()
 {
  cout<<"Base sun\n";
 }
 virtual void run()
 {
  cout<<"Base run\n";
 }
};

class Derived:public Base
{
	public:
	int x,y;
	void gun()
	{
		cout<<"Derived gun\n";
	}
	virtual void run()
	{
	  cout<<"Derived run\n";
	}
	virtual void mun()
	{
		cout<<"Derived mun\n";
	}
};
int main()
{
	Derived dobj;
	Base &bref = dobj;
	
	bref.fun();  //Base fun
	bref.gun();  //Base fun
	bref.sun();  //Base fun
	bref.run();  //Base fun
	// bp.mun();  //Base fun
	
	return 0;
}