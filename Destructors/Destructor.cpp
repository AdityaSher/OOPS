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
		void display()
		{
			cout<<"The value of a is "<<a<<" and that of b is "<<b;
		}
		
};

int main()
{
	testclass t1; //Default constructor is automatically called when object is created
	t1.display();
}
