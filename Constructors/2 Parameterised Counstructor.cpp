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
		
		testclass(int a1, int b1) // paramterised constructor must have parameters: may or may not have body(to be verfifieds)
		{
			a=a1;
			b=b1;
		}
		void display()
		{
			cout<<"The value of a is "<<a<<" and that of b is "<<b;
		}
		
};

int main()
{
	testclass t1(20,30); //Default constructor is automatically called when object is created
	t1.display();
}
