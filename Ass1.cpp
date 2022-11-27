

class Demo 
{
	public :
	void fun(int * p)
	{
		Cout<<"first defination";
	}
	void fun(float *p)
	{
		Cout<<"Second defination";
	}
	void fun(int no)
	{
		cout<<"Third defination";
	}
};
int main()
{
	int no=11;
	float f=3.14;
	
	Demo obj();
	
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);
	
	return 0;
}