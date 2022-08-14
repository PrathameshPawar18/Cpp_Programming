#include<iostream>
using namespace std;

/*
If a class contains atleast one virtual function or if a class is derived from such a class which contains atleast one virtual function then first 8bytes(4 bytes) of 
object are reserved for VPTR (virtual pointer).
That VPTR points to the table i.e VTABLE which contains the address of virtual function of class in order in which they are declared in the class.
If the function is defined as a virtual in base class then use of virtual keyword in the derived class for that function name is optional.
*/

class Base
{
public:
  int i, j;
  
  Base() { i=10; j=20;}
  void fun()   { cout<<"Base fun\n"; }
  virtual void gun() { cout<<"Base gun\n"; }
  virtual void run() { cout<<"Base run\n"; } // Defination
  virtual void mun() { cout<<"Base mun\n"; }  // Defination
};

class Derived : public Base
{
public:
  int x, y;

  Derived() { x=50; y=60; }
  void fun() { cout<<"Derived fun\n"; }
  void sun() { cout<<"Derived sun\n"; }
  void gun() { cout<<"Derived gun\n"; }
  virtual void run() { cout<<"Derived run\n"; } // Defination
  virtual void bun() { cout<<"Derived bun\n"; }  // Defination
};

int main()
{
  cout<<"Size of base class : "<<sizeof(Base)<<endl;
  cout<<"Size od derived class : "<<sizeof(Derived)<<endl; 

  Base *bp2=new Derived;     // Upcasting

  bp2->fun();     
  bp2->gun();     
//  bp2->sun();
  bp2->mun();
  bp2->run();
//  bp2->bun();

  return 0;
}

