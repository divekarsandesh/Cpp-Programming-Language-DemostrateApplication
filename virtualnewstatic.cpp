#include<iostream>
using namespace std;

class Base
{
 public:
  int A,B;
  void fun()
  {
	 cout<<"Base gun\n";
  }  
  virtual void gun()
  {
	  cout<<"Base gun\n";
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
	int X,Y;
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
  Base *bp = NULL;
  Derived dobj;	
  bp = &dobj; //upcasting
  
  bp->fun(); //Base fun
  bp->gun(); //Derived gun
  bp->sun(); //Base sun
  bp->run(); //Derived run
  //bp->mun(); //Error
  
   return 0;
	
}