#include<stdio.h>
using namespace std;
class Base
{
  public :
    int i;
	float f;
	double d;
	
	void fun()
	{
		Cout<<"Base fun";
	}
	void gun()
	{
		cout<<"Base gun\n";
	}
};
class derived : public base{
	public:
	int i;
	double d;
	
	void sun()
	{
		cout<<"Divekar\n";
	}

};
int main()
{
	Base bobj;
	derived dobj;
	
	return 0;
}