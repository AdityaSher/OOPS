#include<iostream>
using namespace std;

class testclass
{	
	
	private:
	int a,b;
	
	public:
		testclass() // default constructor: No paramters : Can have body
		{
			a=10;
			b=20;
		}
		void change(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		testclass(const testclass &obj1) //here is the const is necessary to ensure that the object passed by the function is not changed INSIDE the copy constructor, it can be copied and then the new copy can be manipulated but not the original object!
		{
		    a=obj1.a+5;
		    b=obj1.b+5;
		}
		//even if we remove the above user defined copy constructor a deep copy is created, unless there is pointer data member or run time allocation of data members
		
		
};

testclass func()
{
	testclass tx;
	return tx;	
}

int main()
{
	testclass t1=func();
}
