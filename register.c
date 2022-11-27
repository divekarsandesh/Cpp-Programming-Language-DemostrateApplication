#include<stdio.h>

void Demo()
{
	auto int A = 10;
	A++; //Increament the value by 1;
	printf("Value from Demo is :%d\n",A);
}

void Hello()
{
	static int B = 10;
	B++;
	printf("value from Hello is :%d\n",B);
}

int main()
{
	Demo();
	Demo();
	
	Hello();
    Hello();
	
	return 0;
}