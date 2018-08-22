#include<iostream>
using namespace std;

class testclass
{	
	
	private:
	int a,b;
	static int x;
	
	
	public:
		testclass() // default constructor: No paramters : Can have body
		{
			a=10;
			b=20;
		}
		void display()
		{
			cout<<"The value of a is "<<a<<" and that of b is "<<b<<"\n";
		}
		
		~testclass()
		{
				cout<<"object"<<x <<"destroyed\n";//outputs as many times as there are objects created (hence destructed)
                x++;		
                //using static variable I have printed which object is destructed
		    
		}
		
};

int testclass::x=0;

int main()
{
	testclass t[10]; //Default constructor is automatically called when object is created
	t[1].display();
}
