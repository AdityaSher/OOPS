

#include <iostream>

using namespace std;

class testclass
{

private:
  int a, b;

public:
    testclass ()
  {
    a = 0;
    b = 0;
  }

  testclass (int a1, int b1)
  {
    a = a1;
    b = b1;
  }
  void display ()
  {
    cout << "Value of a= " << a << "and b= " << b << "\n";
  }
};

int
main ()
{
  testclass a[10];
  a[35].display ();		//allows me to access object that hasnt been created but output is grabage value.
  // this wont work if I had not decared the array of object a[10]
}

