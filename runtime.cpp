#include<iostream>
using namespace std;

class Base
{
	public:   //Access specifier
	     int A,B;
		 
		 void fun()  //Function definition  //1000
		 {
			 cout<<"Base fun\n";
		 }
		 void gun(int i)  //Function defination  //2000
		 {
			 cout<<"Base gun with one integer\n";
		 }
		 void gun(int i,int j)   // Overloaded function  //3000
		 {
			 cout<<"Base gun with 2 integer\n";
		 }
};

class Derived : public Base
{
	public:
	   int x,y;
	   void sun()  // function definition   // 4000
	   {
		   cout<<"Derived sun\n";
	   }
	 void fun()   //function redefination   // 5000
	 {
		 cout<<"Derived fun\n";	
	 }
};
int main()
{
	Derived dobj;
    dobj.fun();   //CALL
    dobj.gun(11);  //CALL
    dobj.gun(11,21);  //CALL
    dobj.sun();    //CALL	
	return 0;
}