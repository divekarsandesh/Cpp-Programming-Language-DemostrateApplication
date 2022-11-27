#include<iostream>
using namespace std;
//class declaration
class Maths
{
   public:	        //Access specifier
        int iNo1;   // characteristic
        int iNo2;  //characteristic
   
    Maths()  //constructor (default)
    {
		iNo1 = 0;
		iNo2 = 0;
	}	
	Maths(int A, int B) //constructor(parametarised)
	{
		iNo1 = A;
		iNo2 = B;
	}
	
	int Addition()  // behaviour
	{
		return iNo1 + iNo2;
	}
	
	int substration()  //behaviour
	{
		return iNo1 - iNo2;
	}
};

int main()
{
	Maths mobj1;
	Maths mobj2(11,10);
	int ret =0;
	
	ret = mobj2.Addition();
	cout<<"Addition is :"<<ret<<"\n";
	
	ret = mobj1.Addition();
	cout<<"Addition is :"<<ret<<"\n";
	
	return 0;
}