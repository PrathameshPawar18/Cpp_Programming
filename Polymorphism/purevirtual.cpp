#include<iostream>
using namespace std;


class Base
{
public:
  int i, j;
  
  Base() { i=10; j=20;}

  void fun()   { cout<<"Base fun\n"; }
  virtual void gun() { cout<<"Base gun\n"; }
  virtual void sun()=0;        // Pure virtual function
};

class Derived : public Base
{
public:
  int x, y;

  Derived() { x=50; y=60; }

  void fun() { cout<<"Derived fun\n"; }
  void sun() { cout<<"Derived sun\n"; }
  void gun() { cout<<"Derived gun\n"; }
  virtual void run() { cout<<"Derived run\n"; } 
};

int main()
{
  Base bobj;   // Error
  Base *bp2=new Derived;     // Upcasting

  bp2->fun();     
  bp2->gun();     
  bp2->sun();
 
  return 0;
}

