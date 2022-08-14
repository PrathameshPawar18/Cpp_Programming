#include<iostream>
using namespace std;

class Base
{
public:
  int i, j;
  
  Base()
  {
    i=10;
    j=20;
  }
  void fun()   // Defination
  {
    cout<<"Base fun\n";  
  }
  void gun()   // Defination
  {
    cout<<"Base gun\n";
  }
};

class Derived : public Base
{
public:
  int x, y;

  Derived()    
  {
    x=50; 
    y=60;
  }
   void sun()     // Defination
  {
    cout<<"Derived sun\n";
  }
  void gun()     // Redefination
  {
    cout<<"Derived gun\n";
  }
};

int main()
{
  cout<<"Fuction calls using object\n";
  Base bobj;
  Derived dobj;

  bobj.fun();
  bobj.gun();

  dobj.fun();
  dobj.sun();
  dobj.gun();
  dobj.Base::gun();

  cout<<"Function calls using pointer and dynamic memory allocation\n";
  Base *bp1 = new Base;         // No casting
  Derived *dp1=new Derived;     // No casting

  bp1->fun();
  bp1->gun();

  dp1->fun();
  dp1->sun();
  dp1->gun();
  dp1->Base::gun();

  Base *bp2=new Derived;     // Upcasting
 // Derived *dp2=new Base;  // Downcasting(not allowed)

  // compiler calls the function of pointer type.
  bp2->fun();     // Base fun
  bp2->gun();     // Base gun    (We expect Derived gun)  ->virtual
//  bp2->sun();   // Error
  return 0;
}