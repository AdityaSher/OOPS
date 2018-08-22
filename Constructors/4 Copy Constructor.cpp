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
		testclass(testclass &obj1)
		{
		    a=obj1.a+5;
		    b=obj1.b+5;
		}
		//even if we remove the above user defined copy constructor a deep copy is created, unless there is pointer data member or run time allocation of data members
		void display()
		{
			cout<<"The value of a is "<<a<<" and that of b is "<<b<<"\n";
		}
		
};

int main()
{
	testclass t1; //Default constructor is automatically called when object is created
	/*
		Copy constructors, default (shallow) and deep.
		
		Shallow: 2 objects point to same location
		Deep: 2 objects have different location with same or maipulated values.
	*/
	//Note: in both the examples below deep copy is created
	cout<<"Now I will call copy constructor for my new object t2 by using statement testclass t2=t1";
	
	testclass t2=t1;//calls copy constructor
	
	cout<<"The values of data members of t1 and t2 are as below\n";
	t1.display();
	t2.display();
	
	cout<<"Now I will change the values of t2 to check whether copy constructor created a deep or shallow copy\n";
	t2.change(70,80);
	t1.display();
	t2.display();
	
	cout<<"The values of data members of t1 and t2 are as below\n";
	testclass t3;
	t3=t1;// does not call copy constructor: calls default copy constructor
	cout<<"Declare t3 using def copy connstructor and check for its default values\n";
	t1.display();
	t3.display();
	cout<<"Now I will change the values of t3 to check whether copy constructor created a deep or shallow copy\n";
	t3.change(50,60);
	t1.display();
	t3.display();
	
	
	// We conclude that both the above examples are an instance of deep copy
}
