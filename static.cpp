#include<iostream>
using namespace std;

class Demo
{
	public:
	  int i;
	  int j;
	  static int k;
	  
	  Demo()
	  {
		  i=0;
		  j=0;
	  }
	  Demo(int a, int b)
	  {
		  i = a;
		  j = b;
	  }
};

int Demo::k = 0;

int main()
{
	cout<<"value of k :"<<Demo::k<<"\n"; //0
	Demo obj1(10,11);
	Demo obj2(20,21);
	
	cout<<"value of i in obj1 :"<<obj1.i<<"\n";  //10
	cout<<"value of i in obj2 :"<<obj2.i<<"\n";  //20
	
	cout<<"value of j in obj1 :"<<obj1.j<<"\n";  //11
	cout<<"value of j in obj2 :"<<obj2.j<<"\n";
	  //21
	//cout<<sizeof(obj1); //8
	
	return 0;
}

//size of object is summation of sizes of its non static characteristic
//sizeof(obj) = sizeof(i) + sizeof(j);
//sizeof(obj) =4 + 4;
//sizeof(obj) =8