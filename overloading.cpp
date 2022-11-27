#include<iostream>
using namespace std;

class overloading 
{
	public:
	     // Add@2ii
	   int Add(int a, int b)
	   {
		   cout<<"Adddition of 2 integer\n";
		   return a+b;
	   }
	     // Add@2ff
	   float Add(float a, float b)
	   {
		   cout<<"Addition of floats\n";
		   return a+b;
	   }
	     // Add@2dd
	   double Add(double a,double b)
	   {
		   cout<<"Addition of doubles\n";
		   return a+b;
	   }
	     // Add@3ii
	   int Add(int a, int b,int c)
	   {
		   cout<<"Addition of 3 integer\n";
		   return a+b;
	   }
	   
	   
	   
	   
};

int main()
{
	overloading obj;
	
	obj.Add(11,21);   //CALL 1000
	obj.Add(11,21,51); //CALL 4000
	
	return 0;
}