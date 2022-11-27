#include<iostream>
using namespace std;

class Demo
{
	public:
	  int A,B;
	  
      Demo(int i, int j)
      {
		 A = i;
         B = j;		 
	  }	  
	  void Display()
	  {
		  cout<<A<<"\n";
		  cout<<B<<"\n";
	  }
	  friend Demo operator +(Demo, Demo);
};

//+ is an operator overloaded function which accept 2 parameter and both are objects of Demo class
//this function return the object of demo class
 
Demo operator +(Demo obj1, Demo obj2)
{
	cout<<"Inside +operator function\n";
	return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}

int main()
{
	Demo X(10,20);
	Demo Y(30,40);
	Demo Ans(0,0);
	
	Ans = X + Y;
	
	Ans.Display();
	
	
	
	return 0;
}