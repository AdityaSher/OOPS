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
	/*	
		testclass(int a1, int b1) // paramterised constructor must have parameters: may or may not have body(to be verfifieds)
		{
			a=a1;
			b=b1;
		}
	*/	
	
	/*	
		testclass(int a1=1, int b1=20) // paramterised constructor with default value: cannot be written with above constructor which is in comments
		{//both values cannot be given by default
		//will act only when I dont pass the value b 
		//cant be overloaded with default constructor
			a=a1;
			b=b1;
		}
	*/	
	
	/*
	    testclass(int a1=10, int b1) // paramterised constructor with default value: cannot be written with above constructor which is in comments
		{//both values cannot be given by default
		//will act only when I dont pass the value b 
		//cant be overloaded with default constructor
			a=a1;
			b=b1;
		}
		ERROR IN THIS CASE:default argument missing for parameter 2 of 'testclass::testclass(int, int)'
	
	*/
	
	    testclass(int a1, int b1=20) // paramterised constructor with default value: cannot be written with above constructor which is in comments
		{//both values cannot be given by default
		//will act only when I dont pass the value b 
		//cant be overloaded with default constructor
			a=a1;
			b=b1;
		}// NOTE: if I give both values a1 and b1 then default value is ignored.
	    
		void display()
		{
			cout<<"The value of a is "<<a<<" and that of b is "<<b;
		}
		
};

int main()
{
	testclass t1; //Default constructor is automatically called when object is created
	t1.display(10);
}
