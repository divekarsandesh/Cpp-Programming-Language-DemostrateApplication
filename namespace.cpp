#include<iostream>
using namespace std;

namespace Marvellous
{
	class Demo
	{
		public:
		   int i,j
		   void fun()
		   {
			   cout<<"Inside fun of Demo from Marvellous \n";
		   }
	};
	class Hello
	{
		public:
		   int x,y;
	};
}
namespace Infosystems
{
	class Demo
	{
		public:
		   int a,b;
		   void fun()
		   {
			   cout<<"Inside fun of Demo Infosystem\n";
		   }
		   
	};
}

int main()
{
	Marvellous::Demo obj1;
	obj1.fun();
	Infosysten::Demo obj2;
	obj2.gun();
	
	return 0;
}